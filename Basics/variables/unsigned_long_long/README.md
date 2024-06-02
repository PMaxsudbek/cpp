# C++ da unsigned long long oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    unsigned long long son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturi `unsigned long long` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `unsigned long long` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
Belgisiz juda uzun butun son.
### Hajmi:
8 bayt.
### Oraliq:
0 dan 18446744073709551615 gacha.
### Foydalanish:
unsigned long long a;
