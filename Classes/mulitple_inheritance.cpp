#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        int age;
};

class Pet
{
    public:
        string name;
};

class Dog : public Animal, public Pet
{
    public:
        string breed;
};

class Cat: public Animal, public Pet
{
    public:
        string color;
        
        Cat(string color, string name) : color(color)
        {
            this->name = name;
            // this->age = age;
        };
};

int main() 
{
    Cat cat("brown","tabby");
    cout << cat.age << endl;
}