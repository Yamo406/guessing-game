#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{

    srand (time(NULL));
    int secret_num = rand() % 9 + 1;
    int guess, guess_limit = 0, guess_count = 5 ;
    char play;

    cout << "Welcome to the guessing game" << endl << endl;
    cout << "Do you want to play? [y/n]" << endl;
    cin >> play;
        if(play == 'y' || play == 'Y'){
            cout << "Aight, let's play!" << endl;
            cout << "You have 5 guesses to guess a random number from (1:9)." << endl;
            cout << "Now guess." << endl;
                while(guess != secret_num && guess_count != guess_limit){
                    cout << "Enter your guessed number: ";
                    cin >> guess;
                    guess_count--;
                    cout << "Remaining guesses are: " << guess_count << endl;
                        if(guess == secret_num  && guess_count != guess_limit){
                            cout << "You Win!" << endl;
                            cout << "The secret number is: " << secret_num << endl;
                        } else if(guess == secret_num && guess_count == guess_limit){
                            cout << "You reached the limit, You lose.";
                            cout << "The secret number is: " << secret_num << endl;
                                } else if(guess != secret_num && guess_count == guess_limit){
                                    cout << "You lose, loser :P" << endl;
                                    cout << "Honestly, what a terrible loss that was" << endl;
                                    cout << "The secret number is: " << secret_num << endl;
                                    }
                }
            } else if(play == 'n' || play == 'N'){
                cout << "Coward!" << endl;
            } else {
                cout << "That's not a choice!" << endl;
            }

    return 0;
}
