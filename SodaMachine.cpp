#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	//Declaring Variables
	int i;
	int nickel = 5;
	int dime = 10;
	int quarter = 25;
	int x = 0;

	do {

		//Get input
		cout << "Soda costs $1. Please input a coin." << endl;
		cin >> i;

		if (i == quarter) {
			x += 25;
			cout << "Total input: " << x << " cents" << endl;
			//if 25 is input, 25 is added to total input
		}

		else if (i == dime) {	
			x += 10;
			cout << "Total input: " << x << " cents" << endl;
			//if 10 is input, 10 is added to total input
		}

		else if (i == nickel) {
			x += 5;
			cout << "Total input: " << x << " cents" << endl;
			//if 5 is input, 5 is added to total input
		}

		else
			cout << "Invalid input. Try again." << endl;

	} while (x < 100);

	//Prepare Variables for Change Calculation
	x = x - 100;
	int quarter_change;
	int dime_change;
	int nickel_change;

	//Find, Then Remove Quarters Change
	quarter_change = x / 25;
	x = x - (quarter_change * 25);
	
	//Find, Then Remove Dimes Change
	dime_change = x / 10;
	x = x - (dime_change * 10); 

	//Find, Then Remove Nickels Change
	nickel_change = x / 5;
	x = x - (nickel_change * 5);

	//Final Output
	cout << "\nEnjoy your soda." << endl;
	cout << "Don't forget your change.\n" << endl;

	//Change Output
	printf("Quarters: %d \nDimes: %d \nNickels: %d",
	quarter_change, dime_change, nickel_change);

	cout << "\n\n";
}
