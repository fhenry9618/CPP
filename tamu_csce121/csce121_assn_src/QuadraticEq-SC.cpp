#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Enter the coefficients a, b, and c for a quadratic equation in standard form (ax^2 + bx + c = 0); e.x., \"1, 2, 3\" for \"a, b, c\" respectively" << endl; // note remove prompt prior to vocareum submit
    cin >> a >> b >> c;

    if ( a == 0 ) { // what happens if (b == 0)?  what about when (a == 0 and b != 0)?
        cout << "Can't solve" << endl; // note output doesn't conform to prompt
    } else {
        double disc = pow( b, 2 ) - ( 4 * a * c) ;
        if ( disc < 0 ) { // case where we have complex result... think about (- b / ( 2 * a) +/- ( sqrt( disc ) / (2 * a) ) when implementing; note as written, problem with negative sqrt
            cout << "Can't solve" << endl; // note output doesn't conform to prompt
        } else if ( disc > -0.000001 && disc < .000001 ) { // could use fabs here
            double x1 = ( -b / ( 2 * a ) );
            cout << "x = " << x1 << endl; // note output doesn't conform to prompt
        } else {
            double x1 = ( -b + sqrt( disc ) ) / ( 2 * a );
            double x2 = ( -b - sqrt( disc ) ) / ( 2 * a );
            cout << "x1 = " << x1 << "\t x2 = " << x2 << endl; // note output doesn't conform to prompt
        }
    }


    return 0;
}
