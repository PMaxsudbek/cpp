# Begin27
## `A` son berilgan. `A` ning `A^2`, `A^4`, `A^8` darajalarini aniqlovchi programma tuzilsin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, A2, A4, A8;
    cout << "A = ";cin >> A;
    A2 = pow(A, 2);
    A4 = pow(A, 4);
    A8 = pow(A, 8);
    cout << "A^2 = " << A2 << endl;
    cout << "A^4 = " << A4 <<endl;
    cout << "A^8 = " << A8;
}
```
