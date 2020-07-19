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

using namespace std;    //

int globalVariable = 0; // Global variable

const double PI = 3.141;  // Constant variable

int main(int argc, char** argv) {

    cout << "Hello Frank" << endl;

    bool married = false;
    char myGrade = 'A';

    // There are many integer types with different min
    // and max values
    cout << "Min unsigned short int " <<
            numeric_limits<unsigned short int>::min()
            << endl;
    cout << "Max unsigned short int " <<
            numeric_limits<unsigned short int>::max()
            << endl;
    cout << "Min short int " <<
            numeric_limits<short int>::min()
            << endl;
    cout << "Max short int " <<
            numeric_limits<short int>::max()
            << endl;
    cout << "Min int " <<
            numeric_limits<int>::min()
            << endl;
    cout << "Max int " <<
            numeric_limits<int>::max()
            << endl;
    cout << "Min long " <<
            numeric_limits<long>::min()
            << endl;
    cout << "Max long " <<
            numeric_limits<long>::max()
            << endl;
 
    // Floating type numbers have decimal places
    cout << "Min float " <<
            numeric_limits<float>::min()
            << endl;
    cout << "Max float " <<
            numeric_limits<float>::max()
            << endl;
    cout << "Min double " <<
            numeric_limits<double>::min()
            << endl;
    cout << "Max double " <<
            numeric_limits<double>::max()
            << endl;
    cout << "Min long double " <<
            numeric_limits<long double>::min()
            << endl;
    cout << "Max long double " <<
            numeric_limits<long double>::max()
            << endl;


    return 0;

}   // end main






























