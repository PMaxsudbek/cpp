#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2, X;
    cout << "Birinchi nuqta kordinatalarini kiriting" << endl;cin >> x1 >> y1;
    cout << "Ikkinchi nuqta kordinatalarini kiriting" << endl;cin >> x2 >> y2;
    X = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << X;
}
