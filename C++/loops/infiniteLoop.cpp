/**
 * Infinite Loop Example - useful for embedded systems
 * To compile: $ g++ -o infiniteLoop infiniteLoop.cpp
 * To execute: $ ./infiniteLoop 
 * 
 * */

#include <iostream>

int main()
{
    for(; ;){

        std::cout<<"This for loop will run forever\n";
    }

    return 0;
}