# Begin15
## Aylananing yuzasi `S` berilgan. Uning diametri `d` va radiusi `R` aniqlansin. `L = 2 · π · R`, `S = π · R^2`.
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
    cout << "D = " << D << endl << "R = " << R;
}
```
