#include <iostream>
#include <cmath>

using namespace std;

float const PI = M_PI;

class Shape
{
    public:
        Shape() 
        {};
        
        virtual double Area() const = 0;
        virtual double Perimeter() const = 0;
};


class Rectangle : public Shape
{
    public:
        Rectangle(int height, int width) : height(height), width(width)
        {};
        
        double Area() const
        { return this->height * this->width;};
        
        double Perimeter() const
        { return (height * 2) + (width * 2); };
        
    private:
        int width;
        int height;
};

class Circle : public Shape
{
    public:
        Circle(double radius) : radius(radius)
        {};
        
        double Area() const
        { return this->radius * PI; };
        
        double Perimeter() const
        { return PI * (radius * 2);};
        
    private:
        double radius;
        
};

int main() 
{
    Circle circle(12.31);
    Rectangle rectangle(10, 6);
    
    cout << circle.Area() << " : " << circle.Perimeter() << endl; 
    cout << rectangle.Area() << " : " << rectangle.Perimeter() << endl; 
}