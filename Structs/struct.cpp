// A struct is just a collection of variables. 

#include <iostream>

using namespace std;

struct animal{ // <-- This creates a struct class (A named struct) that can be used to instantiate new struct objects (e.g. animal dog;)
    string name;
    string sound;
    int age;
}; 

struct {
    string name;
    string cpu;
    int memory;
} computer; // <-- This creates a struct object called computer. It can now just be used as is (e.g. computer.name)


int main(){

    animal dog;
    dog.age = 3;
    dog.name = "fluffy";
    dog.sound = "Woof";

    cout << "-----------------------------------------------\n";

    cout << "My dogs name is:\n" << dog.name << "\n";

    cout << "\n-----------------------------------------------\n";

    computer.name = "URURBUNTU"; 

    cout << "My computers name is:\n"<< computer.name << "\n";

    cout << "\n-----------------------------------------------\n";

    return 0;
}