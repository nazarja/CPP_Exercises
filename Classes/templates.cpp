#include <iostream>

using namespace std;

template <typename T>
T Product(T a, T b)
{
    return a * b;
};

int main() 
{
    int result = Product(5, 10);
    cout << result << endl;
}