#pragma once
#include <iostream>
using namespace std;

class Food {
protected:
	string name;
	double price;
	char choice;
public:
	Food(string n, float p) : name(n), price(p) {};
	Food() {};

	virtual void prices() = 0;
	void choose() {
		cout << "Which one would you like to choose?" << endl;
		cin>>choice;
		prices();
	}
	virtual void getName() { "The chosen food item is not available"; };
	
	void order() {
		cout << "\t\t\t-------------------Your Order-----------------\n"
			<< "\t\t\t- Your total Bill is " << price << " zl.               -\n"
			<< "\t\t\t- Your Food will be delivered in 45 minutes. -\n"
			<< "\t\t\t-                                            -\n"
			<< "\t\t\t- Thank you for ordering from Joey's Food!   -\n"
			<< "\t\t\t----------------------------------------------\n";
	};
};


class Pizza : public Food{
	char size;
public:
	Pizza(string n, float p, char s) : Food(n, p), size(s) {};
	Pizza() {};

	void getName() {
		cout << "There are 3 types of Pizza: " << endl;
		cout << "1) Vegeterian" << endl
			<< "2) Margarita " << endl
			<< "3) Marinara " << endl;
	}
	void prices() {
		cout << "Which size? (1) small (2) middle (3) large" << endl;
		cin >> size;

		if (size == '1') price = 19.99;
		else if (size == '2') price = 28.99;
		else if (size == '3')price = 39.99;
		
	}
};


class Pasta: public Food {
public:
	Pasta() {};

	void getName() {
		cout << "There are 3 types of Pasta: " << endl
			<< "1) Lasagna Bolognese" << endl
			<< "2) Toasted Ravioli " << endl
			<< "3) Pasta Puttanesca " << endl;
	}

	void prices() {
		if (choice == '1') price = 23.45;
		else if (choice == '2') price = 32.55;
		else if (choice == '3')price = 36.99;
	}
};

class Sushi :public Food {
	int amount;
public:
	Sushi() {};
	void getName() {
		cout << "There are 4 types of Sushi: " << endl
			<< "1) Nigiri" << endl
			<< "2) Sashimi" << endl
			<< "3) Uramaki" << endl
			<< "4) Temaki " << endl;
	}
	void prices() {
		cout << "How much pieces of sushi would you like to get? (4, 8, 12, 16): ";
		cin >> amount;
		if (choice == '1') {

			if (amount == 4) price = 12.45;
			else if (amount == 8) price = 16.45;
			else if (amount == 12) price = 19.45;
			else if (amount == 16) price = 23.45;
		}
		
		else if (choice == '2') {
			if (amount == 4) price = 10.99;
			else if (amount == 8) price = 14.55;
			else if (amount == 12) price = 18.99;
			else if (amount == 16) price = 21.55;
		}
		else if (choice == '3') {
			if (amount == 4) price = 14.99;
			else if (amount == 8) price = 18.55;
			else if (amount == 12) price = 23.99;
			else if (amount == 16) price = 26.55;
		}
		else if (choice == '4') {
			if (amount == 4) price = 16.55;
			else if (amount == 8) price = 19.55;
			else if (amount == 12) price = 25.99;
			else if (amount == 16) price = 28.55;
		}
	}
};


class Dessert : public Food{
public:
	Dessert() {};

	void getName() {
		cout << "There are 3 types of Desserts in our Cafe (The price is for one piece): \n" 
			<< "1) Apple Pie " << endl
			<< "2) Tiramisu " << endl
			<< "3) Chocolate Coffee Truffle " << endl;
	}

	void prices() {
		if (choice == '1') price =10.99 ;
		else if (choice == '2') price = 9.45;
		else if (choice == '3') price = 12.99;
	}
};

class Beverage : public Food {
public:
	Beverage() {};

	void getName() {
		cout << "What would you like to drink? : " << endl
			<< "1) Coca-Cola " << endl
			<< "2) Sprite " << endl
			<< "3) Water " << endl
			<< "4) Milkshake " << endl;
	}

	void prices() {
		if (choice == '1') price = 7.99;
		else if (choice == '2') price = 7.99;
		else if (choice == '3') price = 5.45;
		else if (choice == '4') price = 9.45;
	}
};


