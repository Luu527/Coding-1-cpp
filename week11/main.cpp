#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

// classes are our own varialble types
class robot {
private:
   //define variable and functions 
   //data members and 
  string name;
  int charge;
public:
  //member function
void status() {
  cout << "[robot:" << name << ", charge: " << charge << "]\n";
}

  //constructors (like beginplay in ue)
  // a constuctor runs when a new instance is created(robot sparkle is an instance.)
  robot(string givenNames = "Barkle", int givenCharge =10 ) {
    cout << "The constructions has been called!\n";
      name = givenNames;
      charge = givenCharge;
      status();
  }

// getters and seeters
  void SetName(string givenNames) {
    name = givenNames;
  }
  void SetCcharge(int givenCharge) {
      if(givenCharge>0) {
        charge = givenCharge;
      }
      else {
          charge = 0;
      }
  }

};
   
int main() {
    cout << "Lets make some classes! \n";
    robot Sparkle;     //this is where the construction function is called
    Sparkle.SetName = " Sparkle Lu";
    Sparkle.SetCcharge(int givenCharge) =  100;
    cout << "My robot's name is" <<  Sparkle.name << ".\n";
    cout << "My robot's charge is " <<  Sparkle.charge << ".\n";
    Sparkle.status();

    // creat a new robot instance and use the constructor to give it costum name and charges
    robot Barkle("Barkle", 20);

    vector<robot> bots;
    vector<string> names {"Barkle", "Sparkle", "Bubbly", "Flint", "Squeak" };

    for(int i = 0; i < 10; i++){
        string tempName = names[rand() % 5 ];
        int tempCharge = rand() % 5 + 5;
        bots.push_back(robot(tempName,tempCharge));
    }

    
    
}
