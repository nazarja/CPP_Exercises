#include "car.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> colors{"red", "blue", "green"};
    vector<Car*> cars;
    Car* car = nullptr;

    for (int i = 0; i < 100; i++)
    {
        car = new Car(colors[i%3], i+1);
        cars.push_back(car);
    }

    for (Car* car : cars)
    {
        car->IncrementDistance();
        car->PrintCarData();
    }
}