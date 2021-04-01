#include <string>
#include <iostream>
using std::string;

class Person
{
    private:
        string name;

    public:
        Person(string name, int age) : name(name), age(age) {};

        int const age;

        string GetName()
        {
            return this->name;
        }
};

int main()
{
    Person person ("Sean", 36);
    std::cout << person.GetName() << std::endl;
    std::cout << person.age << std::endl;
}