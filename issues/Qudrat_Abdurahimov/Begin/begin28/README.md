# Begin28
## `A` son berilgan. `A` ning `A^2`, `A^3`, `A^5`, `A^10`, `A^15` darajalarini aniqlovchi dasturtuzilsin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float A, A2, A3, A5, A10, A15;
    cout << "A = ";cin >> A;
    A2 = pow(A, 2);
    A3 = pow(A, 3);
    A5 = pow(A, 5);
    A10 = pow(A, 10);
    A15 = pow(A, 15);
    cout << "A^2 = " << A2 << endl;
    cout << "A^3 = " << A3 << endl;
    cout << "A^5 = " << A5 << endl;
    cout << "A^10 = " << A10 << endl;
    cout << "A^15 = " << A15;
}
```
