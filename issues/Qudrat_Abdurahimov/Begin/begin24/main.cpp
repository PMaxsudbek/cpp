#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d;
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    cout << "c = ";cin >> c;
    d = a;
    a = c;
    c = b;
    b = d;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c;
}
