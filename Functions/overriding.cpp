#include <iostream>

using namespace std;


void my_function(int a, int b){
    int result = a*b;
    cout << "The result of the int function is " << result << "\n";
}

void my_function(double a, double b){
    double result = a+b;
    cout << "The result of the double funtion is " << result << "\n";
}

int main(){
    my_function(3,3);
    cout << "\n ------------------------------------------------ \n";
    my_function(3.0,3.0);
}