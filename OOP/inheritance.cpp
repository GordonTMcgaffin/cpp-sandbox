#include <iostream>

using namespace std;

class Vehicle{
    public: 
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
    
    private: 
        string brand_two = "Toyota";
        void honk_two() {
            cout << "Toot, toot! \n";
        }
};

class Car: public Vehicle{
    public:
        string model = "Mustang";
};

// Setting an inheritance to private means everything in the parent class becomes private. 
// The private declarations in the parent function will always be private.
class CarTwo: private Vehicle{     
    public:
        string model = "Everest";

        void honk_honk(){
            honk();
        };

        string brand_brand(){
            return brand;
        };
};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model + "\n";

    CarTwo myCarTwo;
    myCarTwo.honk_honk();
    cout << myCarTwo.brand_brand() + " " + myCarTwo.model + "\n";
    return 0;
};
