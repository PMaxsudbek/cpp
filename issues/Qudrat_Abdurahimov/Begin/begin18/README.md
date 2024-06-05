# Begin18
## Sonlar o'qida `A`, `B`, `C` nuqtalar berilgan. `C` nuqta `A` va `B` nuqtalar orasida joylashgan `AC` va `BC` kesmalar uzunligining ko'paytmasini toping.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, B, C, AC, BC;
    cout << "A = ";cin >> A;
    cout << "B = ";cin >> B;
    cout << "C = ";cin >> C;
    AC = fabs(A - C);
    BC = fabs(B - C);
    cout << "AC * BC = " << AC * BC;
}
```
