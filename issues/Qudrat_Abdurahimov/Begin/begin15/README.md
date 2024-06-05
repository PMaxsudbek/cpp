# Begin15
## Aylananing yuzasi `S` berilgan. Uning diametri `D` va uzunligi `L` aniqlansin. `L = 2 · pi · R`, `S = pi · R^2`.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float R, L, S, D, pi = 3.14;
    cout << "S = ";cin >> S;
    R = sqrt(S / pi);
    D = 2 * R;
    L = D * pi;
    cout << "D = " << D << endl << "L = " << L;
}
```
