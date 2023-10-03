#include <iostream>
#include <math.h>

using namespace std;

class Shape
{
    public:
        double cube(double cubeLength)
        {
            return cubeLength * cubeLength * cubeLength;
        }
        
        double calender(double calenderRadius, double calenderHeight)
        {
            return M_PI * pow(calenderRadius, 2) * calenderHeight;
        }
};

int main()
{
    Shape shape;

    double cube_length = 5.0;
    double calender_radius = 3.0;
    double calender_height = 10.0;

    cout << "Volume of cube is :- " << shape.cube(cube_length) << endl;
    cout << "Volume of calender is :- " << shape.calender(calender_radius, calender_height) << endl;

}
