# Begin19
## To'g'ri to'rtburchakning qarama-qarshi uchlari koordinatlari berilgan. Uning tomonlari koordinata o'qiga parallel. To'g'ri to'rtburchakning perimetri va yuzasi aniqlansin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2, a, b, S, P;
    cout << "x1 = ";cin >> x1;
    cout << "y1 = ";cin >> y1;
    cout << "x2 = ";cin >> x2;
    cout << "y2 = ";cin >> y2;
    a = fabs(x2 - x1);
    b = fabs(y2 - y1);
    S = a * b;
    P = (a + b) * 2;
    cout << "P = " << P << endl << "S = " << S;
}
```
