#include <iostream>

using namespace std;

void change_array(int arr[5]);
void change_array_ref(int arr[]);

int main(){
    int arr[5] = {1,2,3,4,5};

    change_array(arr);
    change_array_ref(arr);

    cout << "My array elements are " << arr[0] << " and " << arr[1] << "\n";


}

void change_array(int arr[5]){
    arr[0] = 6;

}

void change_array_ref(int arr[]){
    arr[1] = 77;
}