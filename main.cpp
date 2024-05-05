#include <iostream>
#include <string>
#include <vector>
#include <ctime>


using namespace std;
// calling a function
//input prameters
//function
//say hellow function



void SayHello(){ 
    cout << "Hello!\n";
}

void ShowVector(vector<string> vec) {
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << ".\n";
    }
}


// declaring and defing a function named CastDamage
//it has two pramteres, min and max, which are both intergers
//it's return type is int, which means it returns an interger
int CastDamage (int min, int max) {
    int damage = rand() % (max - min) + min;
    int critRoll = rand() % 5;
    if(critRoll == 4) {
        //double the damage
        damage += damage;
        cout << "Ultimate Attack!\n";
    }
    return damage;
}


// cretaing a function that returns a string. (dead or alive)
// it needs to input pramaters for the player's health 
// assign that to a variable named "int health"
// and then call castDamage() with the min being 5 and the max being health
// subtract castDamage() from health
// if health is less or equal to 0, return "dead"
//else dead

// return type, functionName, input pramaters

string BossFight( ) {
    cout << "How much health you have?\n";
    int health;
    cin >> health;

    health -= CastDamage(5, health);

    if (health <= 0) {
        return "dead";
    }
    else {
        return "alive";
    }
}



int main() {
    srand(time(0));
    string playerStatement = BossFight();
    cout << "the player is " << playerStatement << ".\n";
    
    for (int i = 0; i <10; i++){
        cout << "The enemy did " << CastDamage(5, 10) << " damage.\n";
    }
    
    SayHello();
    vector<string> hateFoods = {"pickles", "tacos", "chicken", "uh?"};

    ShowVector(hateFoods);

    cout << "I also hate onions. \n";
    hateFoods.push_back("onions");

    ShowVector(hateFoods);
    
}
