#include "Robot.h"
#include <bits/stdc++.h>

//read the robots information from file
vector<Robot> readfile(string filename){
	vector<Robot> V;
	Robot robot;
	ifstream ifs (filename);
	if(ifs){
		while(!ifs.eof()){
			ifs >> robot;
			if(!ifs.fail())
				V.push_back(robot);
		}
		ifs.close();
	}
	else{
		cerr << "Problem de lecture du fichier" << endl;
		exit(1);
	} 
	return V;	
}
// print all the robots
void printAll(vector<Robot> list){
	cout << "=======liste de robots=======" << endl;
	for(auto r : list){
		cout << r ;
	}
}
// Verification de la presence d'un robot suivant son nom
bool RechercherRobot(vector<Robot> V, string robotname){
	bool present = false;
	for(auto& robot : V){
		if(robot.getName() == robotname) {
			present = true;
			break;
		}
	}
	return present;
}
// compare 2 robot from prices
bool comparer_robot(const Robot r1, const Robot r2){
	return r1 < r2;
} 
// Sauvegarder les robots dans un fichier
void SaveRobots(vector<Robot> list_robots, string filename) {
	ofstream ofs(filename, ios::out);
	if(ofs){
		for(auto& robot : list_robots){
			ofs << robot;
		}
	}
	else{
		cerr << " Problem with the file " << filename << endl;
	}
	ofs.close();
}

int main() {
	
	vector<Robot> mesrobots;	
	//Robot par defaut
	Robot robot;
	//Robot avec des parametres
	Robot *robot1 = new Robot("RobotKop", "Robot_type", 1000);
	//Lecture des parametres d'un robot
	cout <<'\n'<< "Entre les parametres d'un robot sous la forme: 'nom' 'type' prix " << endl;
	cin >> robot ;
	//Affichage des parametres de nos robots
	cout <<'\n'<< "Affichage des 2 robots de test " << endl;
	cout <<robot<<*robot1 <<endl;

	//Lecture dans le fichier robot.txt
	mesrobots = readfile("Robots.txt");

	// Affichons notre vecteur de robots
	printAll(mesrobots);

	//Verifier si Wall-e est present dans le vecteur
	cout << "\n Searching Wall-e from the list..... " << endl;
	
	if(RechercherRobot(mesrobots, "Wall-e"))
		cout <<'\n'<< "Oui Wall-e est bien un robot de la liste " << endl;
	else cout <<'\n'<< "Non absent de la liste \n" << endl;

	// Tri du vecteur de robot en fonction de leur prix 
	sort(mesrobots.begin(), mesrobots.end(), comparer_robot);

	//Affichage de la liste triée de robots
	cout <<'\n'<< "liste triée de robots " <<'\n'<< endl;
	printAll(mesrobots);

	// Savegarder dans le fichier 
	SaveRobots(mesrobots, "SortedRobots.txt");
	cout << " Saving done!!" << endl;

	cout << "Thanks for testing the code :-)" <<endl;
	return 0;
}
