#include <iostream>

using namespace std;

int main () {
    //Declare Variables
    int height = 7; //7 rows in instructions
    int width = 16; //16 outputs per row
    int indent = 1; //indent%2=1 prints "* ", indent%2=0 prints "  "

for (int r = 0; r < height; r++) //Rows height
    {
       for (int c = 0; c < width; c++) //Outputs per line
       {
            if (indent % 2 == 0) {
                cout << "  ";
                indent++;
                //this output is the "  "
            }
            else {
                cout << "* ";
                indent++;
                //this output is the "* "
            }
       }
       cout << endl; //single endl here makes it more compact vertically.
       indent++; //Each new row changes indent
    }

}
