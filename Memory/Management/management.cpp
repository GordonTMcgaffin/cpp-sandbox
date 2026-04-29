/*
The new keyword seems to be very similar to malloc in c 
*/


#include <iostream>

using namespace std;

int main(){
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << " bytes\n";     // 4 bytes (typically)
    cout << sizeof(myFloat) << " bytes\n";   // 4 bytes
    cout << sizeof(myDouble) << " bytes\n";  // 8 bytes
    cout << sizeof(myChar) << " bytes\n";    // 1 byte

    cout << "\n -----------------------------------------------\n";

    int* num = new int;
    cout << "I assigned some memory and this is its value: " << *num << ". At " << num << "\n";

    *num = 420;
    cout << "I assigned some memory and this is its value: " << *num << ". At " << num << "\n";

    delete num;
    cout << "I assigned some memory and this is its value: " << *num << ". At " << num << "\n";

    cout << "\n -----------------------------------------------\n";

    int numGuests;

    cout << "How may guests will you be having?: ";
    cin >> numGuests;

    string* guests = new string[numGuests];

    cin.ignore(); // <-- makes sure that we dont just skip the first guest name since the input will end with a new line. 
    
    for (int i = 0; i < numGuests; i++) {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    cout << "\nGuests checked in:\n";
    for (int i = 0; i < numGuests; i++) {
        cout << guests[i] << "\n";
    }

    delete[] guests; // Clean up memory
    return 0;
}