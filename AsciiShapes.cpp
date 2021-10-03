#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    //Declare Variables
	int length;
	int height;
	int x;

	do {
        //First Output (List Options)
		cout << "\nSelect a shape from the following options.\n" << endl;
		cout << "(1) Filled Rectangle" << endl;
		cout << "(2) Empty Rectangle" << endl;
		cout << "(3) Filled Triangle" << endl;
		cout << "(4) Empty Triangle" << endl;
		cout << "(5) Exit\n" << endl;
		cin >> x;

		if (x == 1) {
            //Filled Rectangle
			cout << "Enter the height of your rectangle." << endl;
			cin >> height;

			cout << "Please enter the length of your rectangle" << endl;
			cin >> length;
            cout << endl;

            for (int i = 0; i < height; i++) 
            {
                for (int i = 0; i < length; i++) 
                {
                    cout << "* ";
                    //Each row outputs (length) "* "'s
                }
                cout << endl;
                //Outputs (height) rows
            }
        }

		else if (x == 2) {
            //Empty Rectangle
            cout << "Please enter the height of your rectangle.\n";
	        cin >> height;

	        cout << "Please enter the length of your rectangle\n";
	        cin >> length;
            cout << endl;

            //First Line
            for (int i = 0; i < length; i++)
            {
                cout << "* ";
                //Outputs "* " (length) times
            }
            cout << endl;
    
            //Middle Lines
            for (int i = 1; i < (height - 1); i++)
            {
                cout << "* "; //First output "* "
                for (int i = 1; i < (length - 1); i++)
                {
                    cout << "  ";
                    //After first and until the last output are "  "
                }
                cout << "* " << endl; //End line with "* "
            }

            //Last Line
            for (int i = 0; i < length; i++)
            {
                cout << "* ";
                //Outputs "* " (length) times
            }
            cout << endl;
		}

		else if (x == 3) {
			//Filled Triangle
            cout << "Please enter the height of your triangle." << endl;
            cin >> height;

            for (int a = 0; a <= height; a++) 
            {
                for (int b = 0; b < a; b++) 
                {
                    cout << "* ";
                    //Outputs "* " a times, a at this point is the height of that line
                }
                cout << endl;
                //I could Initialize a as 1 but I like that it goes straight to the endl; first
            }
        }

		else if (x == 4) {
			//Empty Triangle
            cout << "Please enter the height of your triangle" << endl;
            cin >> height;
            cout << endl;

            //First Two Lines
            for (int a = 1; a <= 2 && a <= height; a++) 
            {
                for (int b = 0; b < a; b++) 
                {
                    cout << "* ";
                    //Outputs * once for line one, twice for line 2
                }
                cout << endl;
                //This loops until a = 2 or height.
            }
            //Lines 3 Thru (Height - 1)
            for (int a = 3; a < height; a++) 
            {
                for (int b = 0; b < a; b++) //Outputs (a) times
                {
                    if (b == 0 || b == (a - 1)) 
                        cout << "* "; 
                        //First and last outputs of a line are "* "
                    else                        
                        cout << "  "; 
                        //Middle outputs are "  "
                }
                cout << endl;
                //a starts at 3, ends at line before height is reached
            }
            //Last Line
            for (int b = 0; b < height; b++) 
            {
                cout << "* ";
                //Outputs "* " (height) times
            }
            cout << endl;
		}

		else if (x == 5) {
			cout << "Terminating Program...\n" << endl;
			break;
            //Ends program by break;'ing out of the loop
		}

		else {
			cout << "Invalid Input. Please select options 1 thru 5." << endl;
            //Any invalid input should direct here.
		}
	} while (true); //Keeps the program looping until loop is broken
}