#include <iostream>
#include <string>

using namespace std;

double const phi = M_PI;

class VehicleModel
{
    public:
        virtual void Move(double v, double phi) = 0;
};

class ParticleModel : public VehicleModel
{
        
    public:
        double x = 0;
        double y = 0;
        double theta = 0;

        void Move(double v, double phi) override
        {
            theta += phi;
            x += v * cos(theta);
            y += v * cos(theta);
        };
};

class BicycleModel : public ParticleModel
{
    
    public:
        double l = 1;
        
        void Move(double v, double theta) override
        {
            theta += v / l * tan(phi);
            x += v * cos(theta);
            y += v * cos(theta);
        };

};

int main() 
{
    ParticleModel particle;
    BicycleModel bicycle;
    
    particle.Move(10, M_PI / 9);
    bicycle.Move(10, M_PI / 9);
    
    bool x = particle.x != bicycle.x;
    bool y = particle.y != bicycle.y;
    cout << x << " : " << y << endl;
}