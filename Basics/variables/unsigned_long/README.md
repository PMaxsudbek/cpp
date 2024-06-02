# C++ da unsigned long oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    unsigned long son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturi `unsigned long` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `unsigned long` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
Belgisiz uzun butun son.
### Hajmi:
4 yoki 8 bayt (tizimga bog'liq).
### Oraliq:
32-bit tizimda: 0 dan 4294967295 gacha.
64-bit tizimda: 0 dan 18446744073709551615 gacha.
### Foydalanish:
unsigned long a;
