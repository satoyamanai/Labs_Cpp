#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int main() 
{
    srand(time(0));

    int targetNumber = rand() % 100 + 1;  //设置随机数

    int userGuess;
    bool isCorrect = false;

    cout << " Please guess a number between 1 and 100. " << endl;

    while (!isCorrect) {
        cout << " Enter your guess: ";
        cin >> userGuess;

        if (userGuess < targetNumber) {
            std::cout << " Too small! Try again. " << endl;
        } else if (userGuess > targetNumber) {
            std::cout << " Too big! Try again." << endl;
        } else {
            std::cout << " Correct! The number is " << targetNumber << "." << endl;
            isCorrect = true; 
        }
    }

    return 0;
}