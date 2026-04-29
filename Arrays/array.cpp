
#include <iostream>

using namespace std; 

int main(){
    string names[3];
    string surnames[] = {"Lee", "McGaffin"};

    names[0] = "Gordon";
    names[1] = "Jin";

    cout << "My names array contains:\n" << names[0] << "\n" << names[1] << "\n" << names[2] << "\n";
    cout << "My surnames array contains:\n" << surnames[0] << "\n" << surnames[1] << "\n" << surnames[2] << "\n" << "\n";
    cout << names << "\n";
    cout << surnames << "\n";
    cout << "\n-----------------------------------------------\n";

    cout << sizeof(names) << "\n"; // <-- returns the size of something in bytes
    cout << (sizeof(names)/sizeof(names[0])) << "\n";
    cout << (sizeof(names)/sizeof(string)) << "\n";

    cout << "\n-----------------------------------------------\n";

    string name_surname[][2] = {{"Gordon", "Lee"}, {"Jin", "McGaffin"}}; // <-- multidimentional array alway have to have all dimensions defined except for the first one.

    cout << "My names_surnames array contains:\n" << name_surname[0][0] << " " << name_surname[0][1] << "\n" << name_surname[1][0] << " " << name_surname[1][1] << "\n";

    cout << "\n-----------------------------------------------\n";
    return 0;
}