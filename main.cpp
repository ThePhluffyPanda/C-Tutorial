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

    int arryNums1[10] = {1};
    int arryNums2[] = {1, 2, 3, 4};    
    int arryNums3[5] = {8, 9};

    cout << "1st Value: " << arryNums1[0] << endl;
    arryNums1[0] = 7;
    cout << "1st Value: " << arryNums1[0] << endl;

    int arryNums4[2][2][2] = {{{1,2}, {3,4}},
                                {{5,6}, {7,8}}};
    
    cout << arryNums4[0][0][0] << endl;
    cout << arryNums4[0][0][1] << endl;
    cout << arryNums4[0][1][0] << endl;
    cout << arryNums4[0][1][1] << endl;
    cout << arryNums4[1][0][0] << endl;
    cout << arryNums4[1][0][1] << endl;
    cout << arryNums4[1][1][0] << endl;
    cout << arryNums4[1][1][1] << endl;    

        


    return 0;

}   // end main






























