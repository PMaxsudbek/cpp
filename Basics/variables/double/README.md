# C++ da haqiqiy son oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    double son = 5.5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10.5;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturida haqiqiy son oʻzgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` haqiqiy son o\`zgaruvchisi e\`lon qilinadi va `5.5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10.5` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5.5
Son = 10.5
```
## Ko'rsatmalar
### Ma'nosi:
Ikkita aniqlanuvchi nuqta.
### Hajmi:
8 bayt.
### Oraliq:
2.3E-308 dan 1.7E+308 gacha, aniqlik taxminan 15 raqam.
### Foydalanish:
double a;
