#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int playerHealth = 10;
    int gold = 0;
    int turns = 0;
    bool continueAdventuring = true;
    string input;

    while (continueAdventuring && playerHealth > 0) {
        cout << "Do you want to go adventuring? (yes/no): ";
        cin >> input;

        if (input == "yes") {
            turns++;
            int orcAttack = rand() % 6 + 1;
            int playerBlock = rand() % 6 + 1;

            cout << "Orc attacks with: " << orcAttack << endl;
            cout << "Player blocks with: " << playerBlock << endl;

            if (playerBlock >= orcAttack) {
                cout << "You blocked the attack! But you lose 1 health point for the effort.\n";
                playerHealth -= 1; 
                gold += rand() % 10 + 1; 
                cout << "You found some gold! Total gold: " << gold << endl;
            } else {
                cout << "You failed to block the attack!\n";
                playerHealth -= orcAttack; 
            }

            if (playerHealth > 0) {
                cout << "You escaped safely! Current health: " << playerHealth << endl;
            } else {
                cout << "You died!\n";
            }
        } else {
            continueAdventuring = false;
        }
    }


    if (playerHealth > 0) {
        cout << "You are still alive. You lasted " << turns << " turns and found " << gold << " gold.\n";
        if (playerHealth < 5) {
            cout << "Your health is low. Consider seeing a doctor.\n";
        }
    } else {
        cout << "Gold left by your body: " << gold << endl;
    }

    return 0;
}
