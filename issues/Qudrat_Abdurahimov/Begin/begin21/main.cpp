#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, x3, y1, y2, y3, a, b, c, S, P;
    cout << "Birinchi nuqta kordinatalarini kiriting" << endl;cin >> x1 >> y1;
    cout << "Ikkinchi nuqta kordinatalarini kiriting" << endl;cin >> x2 >> y2;
    cout << "Uchinchi nuqta kordinatalarini kiriting" << endl;cin >> x3 >> y3;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    P = a + b + c;
    S = sqrt(P * (P / 2 - a) * (P / 2 - b) * (P / 2 - c) / 2);
    cout << "Perimetri ====>" << P << endl;
    cout << "Yuzasi    ====>" << S;
}
