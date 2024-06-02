# C++ da long int oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    long int son = 5;
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
32-bit tizimda: -2,147,483,648 dan 2,147,483,647 gacha.
64-bit tizimda: -9,223,372,036,854,775,808 dan 9,223,372,036,854,775,807 gacha.
### Foydalanish:
```cpp
long int a;
```
