#include <iostream>

using namespace std;

void my_funtion();
void my_function_with_parameters(string name = "No name", int number = -1, bool boolean = false);

int main(){

    cout << "This is my Main function" << "\n";

    my_funtion();

    return 0;
}

void my_funtion(){

    cout << "This is my function \n";

    my_function_with_parameters("Gordon", 69, true);
    my_function_with_parameters();

}

void my_function_with_parameters(string name , int number , bool boolean ){

    if(boolean){
        cout << "Hi my name is " << name << ", and my age is " << number << "\n";
    }else{
        cout << "Whomp whomp. You entered " << name << " and your age was " << number << "\n";
    }
}