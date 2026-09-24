#include <iostream>
#include <string>

using namespace std;



class Human{

    public:
        int age = 25;
        string name = "Gordon";

};

class Job{

    public:
        string job_title = "Platform Engineer";
        string comanpany = "Electrum Software";

};


class Me: public Human, public Job{

    public:
        int age = 26; //overridin

        string get_info(){
            return "Hi my name is " + name + ", I am "  + to_string(age) + " years old. I work for " + comanpany + " as a " + job_title + "\n";
        }

};










int main(){
    Me me;
    cout << "Hello my information is:" << endl;
    cout << me.get_info();
    return 0;
}