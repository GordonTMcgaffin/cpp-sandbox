#include <iostream>

using namespace std;

int main(){

    auto message = [](string my_message) {
        cout << my_message;
    };

    message("Hello there\n");

    for (int i = 1; i <= 3; i++) {
        auto show = [i]() {
            cout << "Number: " << i << "\n";
        };
        show();
    }

}