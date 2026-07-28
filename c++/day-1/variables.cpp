#include <iostream>
using namespace std;

int main() {

string playername;
int health, level;

cout << "Enter Player Name : ";
cin >> playername;

cout << "Enter Player Health : ";
cin >> health;

cout << "Enter Player Level : ";
cin >> level;

cout << "Player Name is : " << playername << endl;
cout << "Players Health is : " << health << endl;
cout << "Players Level is : " << level << endl;

int chooseweapon;
cout << "Choose your weapon : " << endl;
cout << "1. Sword" << endl;
cout << "2. Bow" << endl;

cin >> chooseweapon;


return 0;

}
 
