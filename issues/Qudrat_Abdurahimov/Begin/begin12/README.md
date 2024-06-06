# Begin12
## To‘g‘ri uchburchakning katetlari `a` va `b` berilgan. Uning gipotenuzasi `с` va perimetri `P` aniqlansin. `c = √(a^2 + b^2)`, `P = a + b + c`
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, P, c;
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    c = sqrt(a * a + b * b);
    P = a + b + c;
    cout << "c = " << c << endl << "P = " << P;
}
```
