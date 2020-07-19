// https://github.com/ThePhluffyPanda/C-Tutorial.git
#include <cstdlib>  // import C Standard General Utilities Library
// https://www.cplusplus.com/reference/cstdlib/

#include <iostream>  // import read and write 

#include <string>   // work with strings

#include <limits>  // min and max values

#include <vector>

#include <sstream>  // string streams

#include <numeric>  // sequences

#include <ctime>    // time

#include <cmath>    // math fucntions

#include <stdio.h>  // allows printf to work... read more here https://stackoverflow.com/questions/29886869/printf-identifier-not-found

using namespace std;    //

int globalVariable = 0; // Global variable

const double PI = 3.141;  // Constant variable

int main(int argc, char** argv) {

    // Conditional Operators: > < >= <= == !=
    // Logical Operators: && || !

    string sAge;

    cout << "Enter your age: ";

    cin >> sAge;
    int nAge = stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18)) {
            cout << "You are young..." << endl;
    } else if ((nAge >= 21) && (nAge <= 50)) {
            cout << "Important Birthday" << endl;
    } else if ((nAge >= 65)) {
            cout << "You are old..." << endl;
    } else {
            cout << "Not an Important Birthday" << endl;
    }


    return 0;

}   // end main






























