# Begin31
## Temperatura `T_F` Farengeytda berilgan. Temperatura qiymatini `T_C` gradus selsiyga o‘tkazuvchi programma tuzilsin. `T_C = (T_F – 32) · 5 / 9`.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float Tf, Tc;
    cout << "Tf = ";cin >> Tf;
    Tc = (Tf - 32) * 5 / 9;
    cout << "Tc = " << Tc;
}
```
