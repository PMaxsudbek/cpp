# Begin39
## `A`, `B`, `C` koeffisentlari berilgan. `A · x^2 + B · x + C = 0` kvadrat tenglamaning diskriminanti noldan katta bo‘lsa uning yechimlarini aniqlaydigan programma tuzilsin. (`A ≠ 0`). `x_1,2 = (-B ± √D) / 2 / A`; `D = B^2 - 4 · A · C`;
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, B, C, x1, x2, D;
    cout << "A = ";cin >> A;
    cout << "B = ";cin >> B;
    cout << "C = ";cin >> C;
    D = B * B - 4 * A * C;
    x1 = (-B + sqrt(D)) / (2 * A);
    x2 = (-B - sqrt(D)) / (2 * A);
    cout << "x1 = " << x1 << endl << "x2 = " << x2;
}
```
