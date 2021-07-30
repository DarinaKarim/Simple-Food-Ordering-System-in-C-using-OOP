#include <iostream>
#include "Header.h"
#include <windows.h>
using namespace std;

void intro() {
	string name;
	cout << "\n\n\t\t\t------------------Joey's Food------------------\n\n";
	cout << "Please, enter your name: ";
	cin >> name;
	cout << "Hello " << name << "! Welcome to Joey's Food!\n\n";
}

void displayMenu() {
	cout << "What would you like to order?\n\n\n";
	cout << "\t\t\t\t---------------MENU---------------\n";
	cout << "\t\t\t\t- 1) Pizza                       -\n";
	cout << "\t\t\t\t- 2) Pasta                       -\n";
	cout << "\t\t\t\t- 3) Sushi                       -\n";
	cout << "\t\t\t\t- 4) Desserts                    -\n";
	cout << "\t\t\t\t- 5) Beverages                   -\n";
	cout << "\t\t\t\t- 6) Exit                        -\n";
	cout << "\t\t\t\t----------------------------------\n";
	cout << "Enter your choice: ";
}

char getChoice(char max) {
	char choice;
	cin >> choice;
	
	while (choice < '1' or choice > max) {
		cout << "Choice must be between 1 and " << max << ". "
			<< "Please re-enter your choice: ";
		cin >> choice;
	}
	return choice;
}
void AnythingElse() {
	cout << "Would you like to order anything else? (Y/N): ";
}
	

int main() {
	system("COLOR B");

	intro();
	
	Pizza pizza;
	Pasta pasta;
	Sushi sushi;
	Dessert dessert;
	Beverage beverage;
	Food* p1 = &dessert;
	Food* p2 = &beverage;
	char c;
	
	do {
		displayMenu();
		char max_choice = '6';
		char choice = getChoice(max_choice);
		
		switch (choice) {
		case '1':
			pizza.getName();
			pizza.choose();
			pizza.order();
			AnythingElse();
			break;
		case '2': 
			pasta.getName();
			pasta.choose();
			pasta.order();
			AnythingElse();
			break;
		case '3':
			sushi.getName();
			sushi.choose();
			sushi.order();
			AnythingElse();
			break;
		case '4':
			p1->getName();
			dessert.choose();
			dessert.order();
			AnythingElse();
			break;
		case '5':
			p2->getName();
			beverage.choose();
			beverage.order();
			AnythingElse();
			break;
		case '6':
			cout << "\nThank you for choosing the Joey's Food!"
				<< "\nVisit us again!"
				<< "\n\n(To exit, press any number): ";
			break;
		}
		cin >> c;
		system("cls");
	} while (c == 'y' or c == 'Y');
	return 0;
}












