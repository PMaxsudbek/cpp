# C++ da unsigned int oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    unsigned int son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturi `unsigned int` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `unsigned int` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
Belgisiz oddiy butun son.
### Hajmi:
4 bayt.
### Oraliq:
0 dan 4294967295 gacha.
### Foydalanish:
```cpp
unsigned int a;
```
