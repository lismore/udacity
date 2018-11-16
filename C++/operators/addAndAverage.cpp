//Write a program that asks a user for five numbers.
//Print out the sum and average of the five numbers.

/**
 * To compile and exectute use the following command (macOS)
 * from the terminal: $ sudo g++ -o addAverage addAndAverage.cpp
 * execute with: $ ./addAverage
 * */

#include <iostream>
#include <cstddef>

using namespace std;

int main()
{   
    float input;
    float sum = 0;
    
    for(size_t i =0; i<5; i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }

    cout << "Enter 5 numbers \n";
    
    std::cout << "Sum = " << sum << "\n";
    std::cout << "Average = " << sum/5 << "\n";
    
    return 0;

}