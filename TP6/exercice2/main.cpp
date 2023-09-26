#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <filesystem>
#include <dirent.h>
#include <string.h>

using namespace std;


//Définition de la structure de données pour représenter une application
struct App {
    string name;
    unordered_set<string> features;
};

// Fonction pour lire les données à partir d'un fichier CSV et les stocker dans un vecteur d'application
App read_csv(const string& filename) {
    App app;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Impossible d'ouvrir le fichier " << filename << endl;
        exit(1);
    }
    app = {filename, unordered_set<string>()};
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string feature;               
        while(getline(ss, feature, ':')){            
            if(feature == "feature") 
                app.features.insert(ss.str());
        }
    }

    return app;
}

// Fonction pour construire l'ensemble des features distinctes à partir des features des applications
unordered_set<string> build_unique_features(const vector<App>& apps){
    unordered_set<string> unique_features;
    for (const auto& app : apps) {        
            for (const auto& feature : app.features) {
                unique_features.insert(feature);
            }        
    }
    return unique_features;
}

// Fonction pour construire la vectorisation d'une application à partir de l'ensemble des features distinctes
vector<int> build_embedding_vector(const App& app, const unordered_set<string>& unique_features) {
    vector<int> embedding_vector(unique_features.size());
    int i = 0;
    for (const auto& feature : unique_features) {
        embedding_vector[i++] = app.features.count(feature) > 0 ? 1 : 0;
    }
    return embedding_vector;
}

int main() {
    // Parcourir la liste des fichiers d'un repertoire
    DIR *dir; struct dirent *diread;
    vector<char *> files;
    vector<App> apps; //vecteur d'applications
    char buf[256];
    char * path_dir = "./Data/";
    
    // On lit dans le repertoire et on recupere les fichiers
    if ((dir = opendir(path_dir)) != nullptr) {
        while ((diread = readdir(dir)) != nullptr) {
            files.push_back(diread->d_name);
        }
        closedir (dir);
    } else {
        perror ("opendir");
        return EXIT_FAILURE;
    }
    cout <<" \n\n La liste des fichiers datasets"<< endl;
    for (auto file : files){
        cout << file << '\n';
        strcpy(buf, path_dir);
        strcat(buf, file);
        apps.push_back(read_csv(buf));
    }    
    cout << endl;

    for(auto app : apps){
        cout << "App_name: "<< app.name << endl;
        for(auto feature : app.features){
            cout << "Feature_name: "<< feature << endl;
        }
        cout << endl;
    }
    

    // Construction de l'ensemble des features distinctes
    unordered_set<string> unique_features = build_unique_features(apps);

    // Construction de la vectorisation de chaque application
    vector<vector<int>> embedding_vectors;
    for (const auto& app : apps) {
        embedding_vectors.push_back(build_embedding_vector(app, unique_features));
    }
    // Affichage des résultats de la vectorisation
    cout << "Affichage des résultats de la vectorisation\n" << endl;
    for (int i = 0; i < apps.size(); ++i) {
        cout << apps[i].name << " :     Embedding vector = [";
        for (int j = 0; j < embedding_vectors[i].size(); ++j) {
            if(j != embedding_vectors[i].size()-1)
                cout << embedding_vectors[i][j] << ", ";
            else cout << embedding_vectors[i][j] << "]";            
        }
        cout <<'\n'<< endl;        
    }

    return 0;
}
