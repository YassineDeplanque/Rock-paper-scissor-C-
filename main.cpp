#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int play(1);
    while (play == 1) {
        cout << "What will you do ? " << endl;
        cout << "Rock (1) " << endl;
        cout << "Paper (2) " << endl;
        cout << "Scissor (3) " << endl;

        int aiChoice = rand() % 3 + 1;
        int playerChoice(0);

        cin >> playerChoice;

        if (playerChoice > 3 || playerChoice == 0) {
            while (playerChoice > 3 || playerChoice == 0) {
                cout << "Choose 1, 2, or 3!" << endl;
                cin >> playerChoice;
            }
        }

        cout << "AI choice: " << aiChoice << endl;

        if (playerChoice == aiChoice) {
            cout << "It's a draw!" << endl;
        } else if ((playerChoice == 1 && aiChoice == 3) ||
                   (playerChoice == 2 && aiChoice == 1) ||
                   (playerChoice == 3 && aiChoice == 2)) {
            cout << "You win!" << endl;
        } else {
            cout << "You lose!" << endl;
        }

        cout << "Do you want to play again? Yes (1), No (2): ";
        cin >> play;

        while (play != 1 && play != 2) {
            cout << "Choose 1 or 2!" << endl;
            cin >> play;
        }
    }

    return 0;
}
