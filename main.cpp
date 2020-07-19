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

    cout << "Hello Frank" << endl;

    bool married = false;
    char myGrade = 'A';

    float f1 = 1.1111111;
    float f2 = 1.1111111;

    printf("Sum of two floats = %.7f\n", (f1 + f2));  // lost precision on the 7th decimal place

    // doubles accurate up to 15 points of precision
    double d1 = 1.111111111111111;
    double d2 = 1.111111111111111;

    printf("Sum of two doubles = %.16f\n", (d1 + d2));  // lost precision on the 16th decimal place

    //auto whatAmI = true;    // auto data type selection 
    
    cout << "int Byte: " << sizeof(int) << endl;    // 4 bytes in an integer

    printf("%c %d %5d %.3f %s\n", 
            'A', 10, 5, 3.1234, "Sup");

    string q1 = "Enter a Number: ";
    string num1, num2;

    cout << q1;
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    //convert strings into intergers
    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2);

    printf("%d + %d = %d", 
            nNum1, nNum2, (nNum1 + nNum2));

    





    return 0;

}   // end main






























