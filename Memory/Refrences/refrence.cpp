// A variable is just a reference to an object stored in memory. Putting & in front of a variable will reviel its memory address.

#include <iostream>

using namespace std;

int main(){

    string food = "Pizza"; // The vairable food store "Pizza" as its value.
    string &meal = food; // We set the memory address of the variable meal to be the same as the memory address of the variable food.

    cout << "My food is " << food << "\n";
    cout << "My food is " << &food << "\n";
    cout << "My meal is " << meal << "\n";
    cout << "My meal is " << &meal << "\n";

    cout << "\n -----------------------------------------------\n";

    food = "Steak";
    cout << "My new food is " << food << "\n";
    cout << "My new meal is " << meal << "\n";

    cout << "\n -----------------------------------------------\n";
    return 0;
}