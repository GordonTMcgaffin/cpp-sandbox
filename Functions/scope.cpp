#include <iostream>

using namespace std;


int x = 5;
int y = 6;

void my_func(){
    int x = 17;

    cout << "My funtionn's value of x is " << x << "\n";
    y++;

}

int main(){
    cout << "The global value of x is " << x << "\n";
    cout << "--------------------------------\n";
    my_func();
    cout << "--------------------------------\n";
    cout << "The global value of y is " << y << "\n";
}

