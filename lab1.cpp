#include <cmath>
#include <iostream>
using namespace std;

struct Wektor2D
{

    double x;
    double y;

    Wektor2D(double xv = 0., double yv = 0.)
    {
        x = xv;
        y = yv;
        cout << "W2D(x,y) = (" << x << "," << y << ")" << endl;
    }

    double norm(double xv, double yv) const { return pow(xv * xv + yv * yv, 0.5); }
};

int main()
{
    Wektor2D myWector{5.0, 7.0}, myWector2{13.12, -2.1};
    cout << "Norma W2D  = " << myWector.norm(myWector.x, myWector.y) << endl;
    cout << "Norma W2D2 = " << myWector2.norm(myWector2.x, myWector2.y) << endl;
}
