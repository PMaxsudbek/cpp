#include <iostream>
using namespace std;
int main()
{
    float X, A, y;
    cout << "X = ";cin >> X;
    cout << "A = ";cin >> A;
    cout << "1kg va necha kilogramm konfetni narxi kerak ==>";cin >> y;
    cout << "1kg konfetning so'mmasi ==>" << A / X << endl;
    cout << y << "kg konfetning so'mmasi ==>" << A / X * y;
}
