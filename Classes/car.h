#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
    private:
        string color;
        int number;
        int distance = 0;

    public:
        Car(string c, int n) : color(c), number(n) {}

        void PrintCarData();
        void IncrementDistance();
        
};

#endif