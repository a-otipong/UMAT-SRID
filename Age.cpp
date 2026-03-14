#include <iostream>

double square(double length);

using namespace std;

int main()
{
    double length = 7.0;
    double area = square(length);

    cout << "Area: " << area << "cm^2 endl";

    return 0;
}
double square(double length){
    double result = length * length;
    return result;

}
