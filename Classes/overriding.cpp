#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        virtual string Talk() const = 0;
};

class Dog :  Animal
{
    public:
        string Talk() const override
        {
            return "Woof";
        };
};

int main() 
{
    Dog dog;
    cout << dog.Talk() << endl;
}