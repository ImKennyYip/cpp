#include <iostream> //includes cstdlib, which includes rand
#include <string>
#include <ctime>
#include <cstdlib> //include rand()
using namespace std;

int main() {
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
    string rps[] = {"rock", "paper", "scissors"};

    //srand = random seed value based on time
    srand((unsigned int) time(NULL)); //time_t, cast to unsigned int

    while (true) {
        cout << "Enter rock, paper, or scissors:";
        getline(cin, player);

        if (player != "rock" && player != "paper" && player != "scissors") {
            break;
        }

        opponent = rps[rand() % 3]; //rand() generates random number, then do modulus 3
        //remainder after dividing 3 can be from 0 to 2, so we use this as the index number
        cout << "Opponent chooses " << opponent << endl;

        if (player == opponent) {
            playerScore++;
            opponentScore++;
        }
        else if (player == "rock") {
            if (opponent == "scissors") playerScore++;
            else if (opponent == "paper") opponentScore++;
        }
        else if (player == "paper") {
            if (opponent == "rock") playerScore++;
            else if (opponent == "scissors") opponentScore++;
        }
        else if (player == "scissors") {
            if (opponent == "paper") playerScore++;
            else if (opponent == "rock") opponentScore++;
        }
        cout << "Player: " << playerScore << " Opponent: " << opponentScore << endl;    
    }

    cout << "Player: " << playerScore << " Opponent: " << opponentScore << endl; 
    if (playerScore > opponentScore) cout << "Player wins!" << endl;
    else if (playerScore < opponentScore) cout << "Opponent wins!" << endl;
    else cout << "Tie!" << endl;
}