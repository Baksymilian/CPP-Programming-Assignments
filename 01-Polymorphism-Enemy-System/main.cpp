#include <iostream>
#include "Enemy.hpp"
#include "Harpy.hpp"
#include "Werewolf.hpp"

using namespace std;

int main() {
    Enemy* enemies[4]; 

    enemies[0] = new Harpy(2.0, 1.0, 100.0, 5.0);
    enemies[1] = new Harpy(5.0, 5.0, 150.0, 10.0);
    enemies[2] = new Werewolf(-2.0, 3.0, 200.0, 2.5);
    enemies[3] = new Werewolf(0.0, 0.0, 300.0, 3.0);
    for (int i = 0; i < 4; ++i) {
        cout << "\nWrog nr " << i+1 << ":" << endl;
        enemies[i]->show();
        
        cout << "Atakuje: ";
        enemies[i]->attack(0.1);
        
        cout << "Porusza sie: " << endl;
        enemies[i]->update_position(1.0, 1.0);
        
        cout << "Stan po akcjach: " << endl;
        enemies[i]->show();
    }

    for (int i = 0; i < 4; ++i) {
        delete enemies[i]; 
    }

    return 0;

}
