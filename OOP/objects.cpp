#include <iostream>

using namespace std;

class Human{
    // Note: By default, all members of a class are private if you don't specify an access specifier
    public:
        string name;
        int age;

        Human(string name, int age){

            Human::name = name;
            Human::age = age; 

        }

        Human(){

            Human::name = "Jin";
            Human::age = 26; 

        }

        void set_id(int id){
            Human::id = id;
        }

        int get_id();

        friend void friend_id(Human man); // <-- Friends can access private variables. 
    
    private:
        int id;
};

int Human::get_id(){ // <-- Function definitions can also be defined outside of the class.
    return Human::id;
}

void friend_id(Human man){
    cout << "The humans secret id is " << man.id << "\n";
}

int main(){
    Human man("Gordon", 25);

    man.set_id(10100101);

    cout << "My name is " << man.name << " and my age is " << man.age << " and my id is " << man.get_id() << "\n";
    friend_id(man);
}