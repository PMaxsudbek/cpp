# Begin13
## Umumiy markazga bo‘gan ikkita aylana radiusi berilgan. `R1` va `R2` (`R1 > R2`). Ularning yuzalari `S1` va `S2`, ularning ayirmasi `S3` aniqlansin. `S1 = π · (R1)^2`, `S2 = π · (R2)^2`, `S3 = π · (R1 - R2)`.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float R1, R2, S1, S2, S, pi = 3.14;
    cout << "R1 = ";cin >> R1;
    cout << "R2 = ";cin >> R2;
    S1 = pi * R1 * R1;
    S2 = pi * R2 * R2;
    S = S1 - S2;
    cout << "S = " << S;
}
```
