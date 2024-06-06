# Begin17
## Sonlar o’qida `A`, `B`, `C` nuqtalar berilgan. `AC` va `BC` kesmalarning uzunligini va kesmalar uzunligining yig’indisini topuvchi programma tuzilsin.
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
    cout << "AC = " << AC << endl << "BC = " << BC << endl << "AC + BC = " << AC + BC;
}
```
