# Begin25
## `x` ning qiymati berilganda `y = 3x^6 – 6x^2 – 7` funksiya qiymati aniqlansin.
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float y, x;
    cout << "x = ";cin >> x;
    y = 3 * pow(x, 6) - 6 * x * x - 7;
    cout << y;
}
```
