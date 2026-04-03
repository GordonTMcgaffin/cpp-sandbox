//
// Created by gordon on 3/23/26.
//

#include "main.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string name ;
    string first_name = "Gordon ";
    string last_name = "McGaffin";
    name = first_name + last_name;
    cout << "Hello world, this is c++ what is your name:\n";
    cout << "My name is " << name << "\n";
    // int age;
    // cin >> age;
    // cout << "and my age is " << age << "\n";
    cout << "and the length of my name is " << name.length();
    cout << "\nand the length of my name is " << name.size();
    cout << "\nand the first letter of my name is " << name[0];
    cout << "\nand the second letter is " << name.at(1) << ". I would like to say: ";
    string input_string;
    getline (cin, input_string);
    cout << input_string << "\n";

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << boolalpha;
    cout << isCodingFun << "\n";
    cout << noboolalpha;
    cout << isFishTasty << "\n";

    if(isCodingFun) {
        cout << "Coding is fun\n";
    }

    int time = 22;
    string message = (time < 12) ? "Good morning."
      : (time < 18) ? "Good afternoon."
      : "Good evening.";
    cout << message;
    return 0;

}

void my_function() {
    cout << "I would like to say: \n";
    string input_string;
    getline (cin, input_string);
    cout << input_string;
}