# Begin9
## Ikkita manfiy bo'lmagan son `a` va `b` berilgan. Ularning o‘rta geometrigi aniqlansin. `√(a * b)`
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, S;
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    S = sqrt(a * b);
    cout << char(251) << "(a * b) = " << S;
}
```
