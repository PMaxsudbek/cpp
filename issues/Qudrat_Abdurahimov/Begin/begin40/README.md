# Begin40
## `A1`, `B1`, `C1`, `A2`, `B2`, `C2` koeffisentlari berilgan, chiziqli tenglamalar sistemasi yechimlarini aniqlaydigan programma tuzilsin. 
- `A1 · x + B1 · y = C1`
- `A2 · x + B2 · y = C2`, `x = (C1 · B2 – C2 · B1) / D`, `y = (A1 · C2 – A2 · C1) / D`, `D = A1 · B2 – A2 · B`
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A1, B1, C1, A2, B2, C2, x, y, D;
    cout << "A1 = ";cin >> A1;
    cout << "B1 = ";cin >> B1;
    cout << "C1 = ";cin >> C1;
    cout << "A2 = ";cin >> A2;
    cout << "B2 = ";cin >> B2;
    cout << "C2 = ";cin >> C2;
    D = (A1 * B2 - A2 * B1);
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - C1 * A2) / D;
    cout << "x = " << x << endl << "y = " << y;
}
```
