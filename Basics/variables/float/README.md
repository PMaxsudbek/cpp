# C++ da float oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    float son = 5.5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10.5;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}
```
Ushbu C++ dasturida `float` oʻzgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `son` `float` o\`zgaruvchisi e\`lon qilinadi va `5.5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10.5` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5.5
Son = 10.5
```
## Ko'rsatmalar
### Ma'nosi:
Qayta aniqlanuvchi nuqta.
### Hajmi:
4 bayt.
### Oraliq:
1.2E-38 dan 3.4E+38 gacha, aniqlik taxminan 6-7 raqam.
### Foydalanish:
```cpp
float a;
```
