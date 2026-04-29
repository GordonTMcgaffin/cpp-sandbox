/*
The & symbol retrieves the memory address of an object, while the * sympol retrieves the value of an aobject. 
*/

#include <iostream>

using namespace std;

int main(){

    string food = "Pizza";

    string* food_pointer = &food; // <-- we create a pointer object that has the address of the food object as a value.

    cout << "My food is " << food << " and it lives at " << food_pointer << "\n";
    cout << "My food pointer points to " << *food_pointer << "\n";

    cout << "\n -----------------------------------------------\n";

    food = "Hamborgor";

    cout << "My new food is " << food << " and it lives at " << food_pointer << "\n";
    cout << "My new food pointer points to " << *food_pointer << "\n";

    cout << "\n -----------------------------------------------\n";

    *food_pointer = "Grapes";

    cout << "My new new food is " << food << " and it lives at " << food_pointer << "\n";
    cout << "My new new food pointer points to " << *food_pointer << "\n";

    cout << "\n -----------------------------------------------\n";

    return 0;
}