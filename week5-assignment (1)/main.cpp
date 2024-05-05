#include <iostream>        
#include <string>
#include <vector>            
using namespace std;


int main() {
     cout << "Let's talk about my favorite games!\n";
        vector<string> favGames;

        favGames.push_back("Red Dead Redemption 2");
        favGames.push_back("Watch Dogs 2");
        favGames.push_back("OverWatch");
        favGames.push_back("Alan Wake 2");
        favGames.push_back("Dead Space");
    
        cout << "I have " << favGames.size() << " favprite games.\n";

        cout << "The one I love most is " << favGames[0] << ".\n";

        cout << "Here are all my fav games:\n";
        
        for(int i = 0; i < favGames.size(); i++) {
             cout << i + 1 << ". " << favGames[i] << "\n";
        }

        cout << "I don't think OverWatch deserves it .\n";
        cout << "You know what? You are right .\n";
    
        favGames[3] = "Rainbow Six Siege";

        cout << "also, Dead Space sounds like from last century.\n";

        favGames.pop_back();        
        
        cout << "Now the new fav game list:\n";
        for(int i = 0; i < favGames.size(); i++){
            cout << i + 1 << ". " << favGames[i] << "\n";
        }
    
}
