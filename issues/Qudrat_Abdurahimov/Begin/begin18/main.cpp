#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, B, C, AC, BC;
    cout << "A = ";cin >> A;
    cout << "B = ";cin >> B;
    cout << "C = ";cin >> C;
    AC = fabs(A - C);
    BC = fabs(B - C);
    cout << "AC * BC = " << AC * BC;
}
