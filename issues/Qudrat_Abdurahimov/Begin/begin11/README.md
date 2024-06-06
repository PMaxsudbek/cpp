# Begin11
## Nolga teng bo'lmagan ikkita son berilgan. Ularning yig‘indisi, ko‘paytmasi va har birining moduli aniqlansin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, P, S, a2, b2;
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    P = a + b;
    S = a * b;
    a2 = fabs(a);
    b2 = fabs(b);
    cout << "a + b = " << P << endl;
    cout << "a * b = " << S << endl;
    cout << "|a| = " << a2 << endl;
    cout << "|b| = " << b2;
}
```
