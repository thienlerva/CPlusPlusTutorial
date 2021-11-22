

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

using namespace std;

class Warrior {
private:
    int attkMax;
    int blockMax;
    
public:
    string name;
    int health;
    
    Warrior(string name, int health, int attkMax, int blockMax) {
        this->name = name;
        this->health = health;
        this->attkMax = attkMax;
        this->blockMax = blockMax;
    }
    
    // The attack and block amount will be random
    int Attack() {
        return rand() % this->attkMax;
    }
    
    int Block() {
        return rand() % this->blockMax;
    }
};

class Battle {
public:
    /* We pass warriors into the function by reference so we can
    *track continued damage to each
    *
    * We continue to loop having each warrior take turns attacking
    until a warriors health < 0
     */
    static void StartFight(Warrior &warrior1, Warrior &warrior2) {
        while(true) {  // Reference static method or static varible use Class::Method, in Java Class.sqrt()
            if(Battle::GetAttackResult(warrior1, warrior2).compare("Game Over") == 0) {
                cout << "Game Over\n";
                break;
            }
            
            if (Battle::GetAttackResult(warrior2, warrior1).compare("Game Over") == 0) {
                cout << "Game Over\n";
                break;
            }
        }
    }
    
    static string GetAttackResult(Warrior &warriorA, Warrior &warriorB) {
        // Get random attack & block amounts and calculate damage
        int warriorAAttkAmt = warriorA.Attack();
        int warriorBBlockAmt = warriorB.Block();
        int damage2WarriorB = ceil(warriorAAttkAmt - warriorBBlockAmt);  // round up
        
        // Change health total if > 0 and output changes
        damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
        warriorB.health = warriorB.health - damage2WarriorB;
        printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(),
                warriorB.name.c_str(), damage2WarriorB);
        
        printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
        
        // Once health < 0 end game by passing back Game Over
        if(warriorB.health <= 0) {
            printf("%s has died and %s is victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
            return "Game Over";
        } else {
            return "Fight Again";
        }
    }
};

int main(int argc, char** argv) {

    // Seed the random number generator
    srand(time(NULL));
    
    Warrior tom("Thor", 100, 35, 15);
    Warrior sam("Hulk", 125, 25, 10);
    
    // Create battle and have it run on its own till completion
    // call static method by Class::Method
    Battle::StartFight(tom, sam);
    
    return 0;
}

