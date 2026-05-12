#include <iostream>

using namespace std;

class human{
    // Note: By default, all members of a class are private if you don't specify an access specifier
    public:
        string name;
        int age;

        human(string name, int age){

            human::name = name;
            human::age = age; 

        }

        void set_id(int id){
            human::id = id;
        }

        int get_id();

        friend void friend_id(human man); // <-- Friends can access private variables. 
    private:
        int id;
};

int human::get_id(){ // <-- Function definitions can also be defined outside of the class.
    return human::id;
}

void friend_id(human man){
    cout << "The humans secret id is " << man.id << "\n";
}

int main(){
    human man("Gordon", 25);

    man.set_id(10100101);

    cout << "My name is " << man.name << " and my age is " << man.age << " and my id is " << man.get_id() << "\n";
    friend_id(man);
}