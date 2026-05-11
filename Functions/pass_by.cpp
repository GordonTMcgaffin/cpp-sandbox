#include <iostream>

using namespace std; 

void change_name(string &name);
void change_number(int num);
void change_other_number(int &num);

int main(){

    int number = 5;
    int other_number = 77;
    string name = "Jin";

    cout << "My name is " << name << " and my number is " << number << " and my other number is " << other_number << "\n";

    change_name(name);
    change_number(number);
    change_other_number(other_number);

    cout << "\n";
    cout << "\n--------------------------------------------------------\n";
    cout << "\n";

    cout << "My name is " << name << " and my number is " << number  << " and my other number is " << other_number << "\n";
}

void change_name(string &name){
    name = "Gordon";
}

void change_number(int num){
    num = 69;
}

void change_other_number(int &num){
    num = 120;
}
