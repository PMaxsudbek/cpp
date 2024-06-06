# Begin34
## `X` kg shokolad `A` so’m turadi va `Y` kg konfet `B` turadi. `1` kg shokolad `1` kg konfetdan qancha qimmat turishini aniqlovchi programma tuzilsin.
```cpp
#include <iostream>
using namespace std;
int main()
{
    float X, A, Y, B;
    cout << "Shokoladning massasini kiriting ";cin >> X;
    cout << "Shokoladning so'mmasini kiriting ";cin >> A;
    cout << "Konfetning massasini kiriting ";cin >> Y;
    cout << "Konfetning so'mmasini kiriting ";cin >> B;
    cout << "1kg shokolad 1kg konfetdan ==>" << A / X - B / Y << "<== ga qimmat";
}
```
