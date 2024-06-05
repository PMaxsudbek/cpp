# Begin22
## Berilgan `A` va `B` sonlarining qiymatlarini almashtiring. A va B ning yangi qiymati ekranga chiqarilsin
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl << "b = " << b;
}
```
