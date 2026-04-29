#include <iostream>

using namespace std;

enum Level {
  LOW= 5,     // <-- Enum values typically start at 0, but if you define the first value, then the others will just be +1. So MEDIUM=6, and HIGH=7
  MEDIUM ,
  HIGH
};

int main(){

    enum Level myenum = MEDIUM;

    cout << "My level is: " << myenum << "\n";

    cout << "\n-----------------------------------------------\n";

    switch (myenum) {
        case 1:
        cout << "Low Level\n";
        break;
        case MEDIUM:
        cout << "Medium level\n";
        break;
        case 3:
        cout << "High level\n";
        break;
    }

    cout << "\n-----------------------------------------------\n";
 
    return 0;

}

