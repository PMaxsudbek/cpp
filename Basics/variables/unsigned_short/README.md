# C++ da unsigned short oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    unsigned short son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturi `unsigned short` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `unsigned short` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
Belgisiz qisqa musbat butun son.
### Hajmi:
2 bayt.
### Oraliq:
0 dan 65,535 gacha.
### Foydalanish:
```cpp
unsigned short a;
```
