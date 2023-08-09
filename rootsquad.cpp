//C++ program to calculate roots of a quadratic equation
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    float a, b, c, x1, x2, D, Real_Part, Imaginary_Part;
    cout << "Enter coefficients a, b, c : ";
    cin >> a >> b >> c ; 
    D = b*b - 4*a*c;

    if (D > 0)

    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        
        cout << "Roots are real and different." << endl;
        
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

else if (D == 0)
{
    cout << "Roots are real and same." << endl;
    x1 = -b/(2*a);
    cout<< "x1 = x2 = " << x1 << endl;
}
else
{
    Real_Part = -b/(2*a);
    Imaginary_Part = sqrt(-D/(2*a));
    
    cout << "Roots are imaginary and complex." << endl;
   
    cout << "x1 = " << Real_Part << "+" << Imaginary_Part << "i" << endl;
    cout << "x2 = " << Real_Part << "-" << Imaginary_Part << "i" << endl;
    }

    return 0;

}