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

    // ---------- VECTORS ----------
    // Vectors are used when you don't know how big the array
    // should be
    vector<int> vNums(2);
 
    // Add values
    vNums[0] = 1;
    vNums[1] = 2;
 
    // Add another to the end
    vNums.push_back(3);
 
    // Get vector size
    cout << "Vector Size : " << vNums.size() << endl;
 
    // ---------- LOOPING ----------
 
    // While loops continue to run the code in them
    // as long as a condition is true
 
    // Create the variable used in the while condition
    // before the while loop
    int i = 1;
 
    while (i <= 20){
        // If a value is even don't print it
        if((i % 2) == 0){
            i += 1;
 
            // Continue skips the rest of the code
            // and jumps back to the beginning
            // of the loop
            continue;
        }
 
        // Break stops execution of the loop and jumps
        // to the line after the loops closing }
        if(i == 15) break;
 
        cout << i << "\n";
 
        // Increment i so the loop eventually ends
        i += 1;
    }
 
    // A stringstream object receives strings separated
    // by a space and then spits them out 1 by 1
    vector<string> words;
    stringstream ss("Some Random Words");
    string word;
 
    // A while loop will execute as long as there are
    // more words
    while(getline(ss, word, ' ')){
        words.push_back(word);
    }
 
    // Cycle through each index in the vector using
    // a for loop
    for(int i = 0; i < words.size(); ++i){
        cout << words[i] << endl;
    }
 
    // An abbreviated for loop
    int arr3[] = {1,2,3};
    for(auto x: arr3) cout << x << endl;
 
    // Do while loops are guaranteed to execute at
    // least once
    // We'll create a secret number guessing game
 
    // We need to seed the random number generator
    // time() returns the number of seconds
    // since 1, 1, 1970
    // Include <ctime>
    srand(time(NULL));
 
    // Generate a random number up to 10
    int secretNum = rand() % 11;
    int guess = 0;
    do{
        cout << "Guess the Number : ";
        cin >> guess;
        if(guess > secretNum) cout << "To Big\n";
        if(guess < secretNum) cout << "To Small\n";
    } while(secretNum != guess);
 
    cout << "You guessed it" << endl; 



    return 0;

}   // end main







