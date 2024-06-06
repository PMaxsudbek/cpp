# Begin32
## Temperatura `T_F` gradus Selsiyda berilgan. Temperatura qiymatini `T_C` Farengeytga o'tkazuvchi programma tuzilsin. `T_C = (T_F – 32) · 5 / 9`.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float Tf, Tc;
    cout << "Tc = ";cin >> Tc;
    Tf = Tc * 9 / 5 + 32;
    cout << "Tf = " << Tf;
}
```
