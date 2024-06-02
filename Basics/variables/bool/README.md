# C++ da bool oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    bool son = false;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = true;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}

```
Ushbu C++ dasturi `bool` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `bool` o\`zgaruvchisi e\`lon qilinadi va `false` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `true` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 0
Son = 1
```
## Ko'rsatmalar
### Ma'nosi:
Mantiqiy qiymat.
### Hajmi:
1 bayt.
### Oraliq:
true yoki false(1 yoki 0).
### Foydalanish:
```cpp
bool a;
```
