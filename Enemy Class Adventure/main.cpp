#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

enum itemType {
    weapon, consumable
};

class Item {
public:
    itemType type;
    string name;
    int effect; 

    Item(string n, itemType t, int e) : name(n), type(t), effect(e) {}
};

class Enemy {
public:
    string name;
    int health;
    Item weapon;

    Enemy(string n, int h, Item w) : name(n), health(h), weapon(w) {}

    void attack(int &playerHealth) {
        if (weapon.type == weapon) {
            cout << name << " attacks you with " << weapon.name << " for " << weapon.effect << " damage!" << endl;
            playerHealth -= weapon.effect;
        }
    }
};

int main() {
    srand(time(0));

    int playerHealth = 10;
    vector<Item> items = {
        Item("Sword", weapon, 3),
        Item("Healing Potion", consumable, 5)
    };

    Enemy orc("Orc", 10, items[0]);

    while (playerHealth > 0 && orc.health > 0) {
        cout << "Player Health: " << playerHealth << ", " << orc.name << " Health: " << orc.health << endl;
        cout << "Choose action:\n1. Attack with " << items[0].name << "\n2. Use " << items[1].name << endl;
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "You attack the " << orc.name << " with " << items[0].name << " for " << items[0].effect << " damage!" << endl;
            orc.health -= items[0].effect;
        } else if (choice == 2 && items[1].type == consumable) {
            cout << "You use " << items[1].name << " to heal " << items[1].effect << " health." << endl;
            playerHealth += items[1].effect;
        }

        if (orc.health > 0) {
            orc.attack(playerHealth);
        }
    }

    if (playerHealth > 0) {
        cout << "You defeated the " << orc.name << "!" << endl;
    } else {
        cout << "You died!" << endl;
    }

    return 0;
}
