# C++ da long int oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    int son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturi `long int` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `long int` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
Uzun butun son (int bilan bir xil).
### Hajmi:
4 yoki 8 bayt (tizimga bog'liq).
### Oraliq:
32-bit tizimda: -2147483648 dan 2147483647 gacha.
64-bit tizimda: -9223372036854775808 dan 9223372036854775807 gacha.
### Foydalanish:
long int a;
