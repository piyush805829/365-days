#include <iostream>
using namespace std;

int main()
{
    int weapon;

    cout << "Choose weapon (1-3): ";
    cin >> weapon;

    switch (weapon)
    {
    case 1:
        cout << "Sword Selected";
        break;

    case 2:
        cout << "Bow Selected";
        break;

    case 3:
        cout << "Magic Staff Selected";
        break;

    default:
        cout << "Invalid Choice";
    }

    return 0;
}