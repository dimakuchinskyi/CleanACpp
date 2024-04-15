#include "screens.h"


void AppScreens::Home(string name)
{
	
	string* login = new string();
	cout << "Enter your login: ";
	cin >> *login;
	User* user = new User(login);
	if (name == "Admin") {
		cout << "welcome to admin credentials " << *login << endl;
	}
	else{
		cout << "welcome to application" << *login << "!" << endl;
	
	}
}