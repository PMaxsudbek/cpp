# C++ da long double oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    long double son = 5.5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10.5;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturida `long double` oʻzgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `long double` o\`zgaruvchisi e\`lon qilinadi va `5.5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10.5` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5.5
Son = 10.5
```
## Ko'rsatmalar
### Ma'nosi:
Uzun aniqlanuvchi nuqta.
### Hajmi:
12 yoki 16 bayt (tizimga bog'liq).
### Oraliq:
Aniqlik va oraliq tizimga bog'liq, odatda juda katta.
### Foydalanish:
long double a;
