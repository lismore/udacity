/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include <sstream>

int main()
{
    //use 55 as the number to be guessed
    int targetguess = 55;
    int guess = -1;

    while(guess != targetguess)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;

        if(guess > targetguess){

            std::cout << "Guess Lower <"; 
        }else{

            std::cout << "Guess Higher >";
        }

        std::cout<<guess<<"\n";
    }

    return 0;
}