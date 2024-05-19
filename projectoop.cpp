#include <iostream>
#include <time.h>
#include <cstring>

using namespace std;
/* A fun and engaging basic GUESS THE NUMBER game. Hope you enjoy playing it. Have fun.*/


void playGame(int lowerrange, int upperrange) {
    int secretNumber = rand() % (upperrange - lowerrange + 1) + lowerrange;
    int guess;
    int attempts = 0;

    cout<<"I have selected a number between "<< lowerrange<<" and "<< upperrange <<"Try to guess it!\n";

    do {
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;

        if (guess < secretNumber) {
            cout<<"Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout<<"Too high! Try again.\n";
        } else {
            cout<<"Congratulations! You guessed the number "<<secretNumber <<"in "<<attempts <<"attempts!\n";
            cout<<"\nPlease come again and try our harder levels.\n \n Thank you!!!";
            break;
        }
    } while (1);
}

/*main function*/

int main() {
    srand(time(0));
    cout<<"\n \nWelcome to the GUESS THE NUMBER game!\n";
    cout<<"\n \n";
    cout<<" #         #  ##########  #          #########  ##########   #         #  ##########    ##    ##     \n";
    cout<<" #         #  #           #          #          #        #   #  #   #  #  #             ##    ##     \n";
    cout<<" #         #  #           #          #          #        #   #    #    #  #             ##    ##     \n";
    cout<<" #         #  ##########  #          #          #        #   #         #  ##########    ##    ##     \n";
    cout<<" #    #    #  #           #          #          #        #   #         #  #             ##    ##     \n";
    cout<<" #  #   #  #  #           #          #          #        #   #         #  #                          \n";
    cout<<" #         #  ##########  ########   #########  ##########   #         #  ##########    #     #      \n";
    cout<<"\n-------------------------------------------------------------------------------------------------------------\n";
    
    
    
    cout<<"Brought to you by:\n Abhaya Shrestha\n";
    
    char choice[5];
    cout<<"\nDo you want to play? (yes/no):\n ";
    
    cin>>choice;

    if (strcmp(choice, "yes") == 0) {
        cout<<"Let's see what you can do!";
        
        int difficulty;
        
        cout<<"\nSelect difficulty level:\n";
        cout<<"1. Easy (1-100)\n";
        cout<<"2. Medium (1-1000)\n";
        cout<<"3. Hard (1-10000)\n";
       
        cout<<"\nEnter the number corresponding to your choice:\n ";
        
        cin>>difficulty;

        int lowerrange, upperrange;

        switch (difficulty) {
            case 1:
                lowerrange = 1;
                upperrange = 100;
                break;
            case 2:
                lowerrange = 1;
                upperrange = 1000;
                break;
            case 3:
                lowerrange = 1;
                upperrange = 10000;
                break;
            default:
                cout<<"-------------------------------------------------------------------------------------------------------------";
                cout<<"\nxxxxxxxxxxxx\tInvalid choice\txxxxxxxxxxxxxxx \n";
                
                cout<<"Tip:  Run again and Try putting the choice between 1 and 3 only\n";
               
                
                cout<<"EXITING......";
                
                return 1;
        }

        playGame(lowerrange, upperrange);

    } else {
        
        cout<<"\nTip:  Try writing 'yes' as a whole word to proceed.\n";
        
        cout<<"\nCome back when you wanna play.\n";
        
    }

    return 0;
}

