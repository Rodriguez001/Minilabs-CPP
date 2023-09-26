#include "Directory.h"
#include "File.h"
#include "Text.h"
#include "Image.h"
#include "Video.h"
#include <cxxabi.h>
#define quote(x)

int main() {
	//int status;
	string filename, foldername;
	Directory * directory;
	//creation du jeu de test
	File * texte1 = new Text("Text1", ".txt", 10, Unicode);	
	File * image1 = new Image("image1", ".png", 100, 300, 200);
	File * video1 = new Video("video1", ".avi", 100, 36000);
	File * texte2 = new Text("Text2", ".doc", 100, Unicode);	
	File * image2 = new Image("image2", ".jpg", 300, 20, 15);
	File * video2 = new Video("video2", ".mp4", 450, 400);
	File * texte3 = new Text("Text3", ".docx", 1000, ASCII);	
	File * image3 = new Image("image3", ".gif", 8000, 400, 200);
	File * video3 = new Video("video3", ".wmv", 500, 4000);
	File * texte4 = new Text("Mon_Cv", ".pdf", 360, Unicode);	
	File * image4 = new Image("rodrigue", ".tiff", 5200, 200, 251);
	File * video4 = new Video("Avatar", ".fly", 45000, 960000);
	File * texte5 = new Text("Recommendation", ".docx", 1000, ASCII);	
	File * image5 = new Image("Ulrich", ".jpeg", 120, 12, 10);
	File * video5 = new Video("Fastandfurous", ".mkv", 500, 4000);
	cout << "Creating directory ...!!" << endl;
	cout << "Enter a name for the folder?" << endl;
	cin >> foldername ;
	directory = new Directory(foldername);
	// chargement dans le directory
	directory->pushFile(texte1)->pushFile(image1)->pushFile(video1)
			 ->pushFile(texte2)->pushFile(image2)->pushFile(video2)
			 ->pushFile(texte3)->pushFile(image3)->pushFile(video3)
			 ->pushFile(texte4)->pushFile(image4)->pushFile(video4)
			 ->pushFile(texte5)->pushFile(image5)->pushFile(video5);
	// Affichage du contenu du repertoire
	cout <<*directory<<endl;
	// Calculons le taux de compression moyen du repertoire
	cout <<"le taux moyen de compression du repertoire donné : "<<directory->getAvRateCompressedSize()<<" %"<<endl;
	//Calculons le taux moyen de compression des fichiers videos
	//cout << abi::__cxa_demangle(typeid(texte1).name(),0,0,&status) << " " << quote(video1)<< endl;
	cout <<"le taux moyen de compression des fichiers videos du repertoire : "<<directory->getAvRateCompressedType("video")<<" %"<<endl;
	
	cout << "Thanks for testing the code :-)" <<endl;
	return 0;
}
