# Begin26
## `x` ning qiymati berilganda `y = 4(x – 3)^6 – 7(x – 3)^3 + 2` funksiya qiymati aniqlansin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float y, x;
    cout << "x = ";cin >> x;
    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << y;
}
```
