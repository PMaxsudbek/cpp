# Begin14
## Aylananing uzunligi `L` berilgan. Uning radiusi `R` va yuzasi `S` aniqlansin. `L = 2·pi·R`, `S = pi·R^2`.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float R, L, S, pi = 3.14;
    cout << "L = ";cin >> L;
    R = L / (pi * 2);
    S = pi * R * R;
    cout << "R = " << R << endl;
    cout << "S = " << S;
}
```
