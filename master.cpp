#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void play_game();

int main()
{
    srand(time(NULL));
    int response;

    cout << "[1]Play game.\n[2]]Quit.\n>>";
    cin >> response;

    switch(response)
    {
        case 1:
            play_game();
            break;
        case 2:
            break;
    }

    return 0;
}

void play_game()
{
    char answer = 'y';
    do
    {
        //Play game
        if(answer == 'y')
        {
            int target = rand() % 101;
            int score = 10;
            int guess;

            cout << "Guess a number from 0 to 100.\n>>";
            
            
            do
            {
                cin >> guess;
                if(target > guess){cout << "Higher.\n>>";score--;}
                else if( target < guess){cout << "Lower.\n>>";score--;}

                if(score == 0){cout << "Sorry you lost.\n";}

            } while (target != guess);

            cout << "Congratulations. Your score is " << score << ".\n";
            
        }

        cout << "Do you want to play again?[y/n]\n>>";
        cin >> answer; 

        if(!(answer == 'y' || answer == 'n')){cout << "Invalide response.\n";}
    } while (answer == 'y');
}