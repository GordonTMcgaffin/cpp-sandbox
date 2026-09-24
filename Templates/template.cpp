#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
};

template <typename T>
class Box
{
public:
    T value;
    Box(T v)
    {
        value = v;
    }

    void show()
    {
        cout << value << endl;
    }
};

int main()
{
    cout << add<int>(5, 3) << "\n";
    cout << add<double>(2.5, 1.5) << "\n";

    Box<int> myBox(50);

    myBox.show();

    return 0;
}