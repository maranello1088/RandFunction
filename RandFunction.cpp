// RandFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> //This is required to use the rand () function
#include <ctime> //This is required to use the time () function
#include <cmath>
//If I am looking for precision, I should consider using the random header file. #include <random>

//Pseudo_random numbers are random numbers but the sequence that they are generated in are not random and can be easily deciphered.//
using namespace std; 

int main()
{
    int random_number{};
    size_t count{ 10 };           // number of random numbers to generate
    int min{ 1 };                  // lower bound (inclusive)  This is a die which has only 6 numbers
    int max{ 6 };                 // upper bound (inclusive) 

    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); //If i comment this line of code out and fail to seed the random number generator, then the sequence would be easier to demystify

    for (size_t i{ 1 }; i <= count; ++i) {
        random_number = rand() % max + min;     // generate a random number [min, max]
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}

