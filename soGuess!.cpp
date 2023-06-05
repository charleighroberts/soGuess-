/*Write a program that generates a random number between 1 and 100
and asks the user to guess what the number is.  
If the user's guess is higher than the random number, the program should display "Too high, try again."  
If the user's guess is lower than the random number the program should display "Too low, try again."  
The program should use a do-while loop that repeats until the user guesses the number correctly.  
The program should also employ a while loop that keeps track of the number of guesses made by the user 
and, once the user guesses the number correctly, displays the number of guesses the user made.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Welcome to So Guess! \n";

    int guessNum;
    int randomNum;
    double totalGuess = 0;

    //generate random number
    srand(time(0));
    for (int x = 1; x < 2; x++) {
        
        randomNum = 1 + (rand() % 100);
        //cout << randomNum;
    }

        do{
            //ask user to guess number
            cout << "A random number has generated. Please make your guess!";
            cin >> guessNum; 
            cout << endl;

            //if number is too low
            if (guessNum < randomNum) {
                cout << "Too low, try again.\n";
            };
            //if number is too high
            if (guessNum > randomNum) {
                cout << "Too high, try again.\n";
            };

            //keep track of total number of guesses
            totalGuess += 1;

        } while (guessNum != randomNum);

        cout << "Congratulations! You guessed correctly!\n";
        cout << "Random Number: " << randomNum << endl;
        cout << "Total number of guesses: " << totalGuess << endl;

   


    //terminate program
    //system("pause>0");
}