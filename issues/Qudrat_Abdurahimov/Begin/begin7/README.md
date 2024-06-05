# Begin7
## Doiraning radiusi `R` berilgan. Uning uzunligi `L` va yuzasi `S` aniqlansin `L = 2 * pi * R`, `S = pi * R^2`
```cpp
#include <iostream>
using namespace std;
int main()
{
    float R, L, S, pi = 3.14;
    cout << "R = ";cin >> R;
    L = 2 * pi * R;
    S = pi * R * R;
    cout << "L = " << L << endl << "S = " << S;
}
```
