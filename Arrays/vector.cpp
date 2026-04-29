#include <vector> //<-- The vector library needs this  
#include <iostream>

using namespace std; //<-- The vector library needs this  

int main(){

    vector<string> names = {"Gordon", "Jin"};

    names.push_back("John");

    cout << "My names array contains:\n" <<  names.at(0) << "\n" <<  names.at(1)  << "\n" <<  names.at(2)  << "\n";

    names.push_back("Dear");

    cout << names.size() << "\n";

    names.pop_back();

    cout << names.size() << "\n";

    cout << "\n -----------------------------------------------";

    return 0;
}