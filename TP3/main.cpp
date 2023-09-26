#include "Time.h"

//surcharge externe de l'operateur <
bool operator < (const Time & t1, const Time & t2) {
    return (t1.hour < t2.hour) 
    || ((t1.hour == t2.hour)&&(t1.minute < t2.minute)) 
        || ((t1.hour == t2.hour)&&(t1.minute == t2.minute)&&(t1.second < t2.second));
}

int main() {
	unsigned short h, m, s;
	string buf = "";

	cout << "Enter 'exit' or 'go' to stop de loop" << endl;
	cin >> buf ;

	cout << "Waiting input times time1 and time2: in this form hh mm ss" << endl;
	cout << "time1 : " << endl;
	cin >> h >> m >> s ;
	Time t1(h,m,s);
	cout << "time2 : " << endl;
	cin >> h >> m >> s ;
	Time t2(h,m,s);		
	while(buf != "exit"){
		// test de l'operater <	
		cout << "test de l'operateur <" << endl;
		if(t1 < t2) cout << t1 <<" est anterieure à "<< t2 << endl;
		else cout << t1 <<" n'est pas antérieure à "<< t2 << endl;
		// test de l'operater == (l'égalité)
		cout << "test de l'operateur(egalité) == " << endl;
		if(t1 == t2) cout << "c'est la même heure" << endl;
		else cout << "les heures ne sont pas égales" << endl;
		//test de la difference !=
		cout << "test de l'operateur != (difference)" << endl;
		if(t1 != t2) cout << "les heures sont differentes" << endl;
		else cout << "les heures ne sont pas differentes" << endl;
		//test de <=
		cout << "test de l'operateur <=" << endl;
		if(t1 <= t2) cout << t1 <<" est anterieure à "<< t2 << endl;
		else cout << t1 <<" est n'est pas anterieure à"<< t2 << endl;
		// test de >
		cout << "test de l'operateur >" << endl;
		if(t1 > t2) cout << t1 <<" est posterieure à "<< t2 << endl;
		else cout << t1 <<" est n'est pas posterieure à "<< t2 << endl;
		// test de >=
		cout << "test de l'operateur <=" << endl;
		if(t1 >= t2) cout << t1 <<" est posterieure à "<< t2 << endl;
		else cout << t1 <<" est n'est pas posterieure à"<< t2 << endl;
		//test de l'incrementation ++
		cout << "Test de l'incrementation ++" << endl;
		cout << "Avant increment ++" << t1 << endl;
		cout << "Apres increment ++ : " << ++t1 << endl;
		//test de l'incrementation --
		cout << "Test de la décrementation --" << endl;
		cout << "Avant decrement --" << t1 << endl;
		cout << "Apres decrement -- : " << --t1 << endl;
		
		// le mot d'arret d'execution		
		cout << "Enter 'exit' or 'go' to stop de loop" << endl;
		cin >> buf ;
		
		cout << "Waiting input times time1 and time2: in this form hh mm ss" << endl;
		cout << "time1 : " << endl;
		cin >> h >> m >> s ;
		Time t1(h,m,s);
		cout << "time2 : " << endl;
		cin >> h >> m >> s ;
		Time t2(h,m,s);		
			
	}
	cout << "Thanks for testing the code :-)" <<endl;
	return 0;
}
