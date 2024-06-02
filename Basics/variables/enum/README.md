# C++ da enum oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
// Taomlar turi uchun enum
enum Taomlar {
    Osh,
    Manti,
    Somsa
};
int main() {
    Taomlar taom = Somsa;// Enum qiymatlariga murojaat qilish
    cout<< taom << endl;// Enum qiymatini chop etish
    return 0;
}
```
Ushbu C++ dasturi `enum` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## enum Tipi
`Enum` (`enumeration` - `ro'yxatga olish`) C++ dasturlash tilida ma'lumot turi bo'lib, bitta qiymatlarni turli o'zgaruvchilarga bog'lash uchun ishlatiladi. 
`Enum` turining asosiy maqsadi, kodni o'qimaslik va to'g'ri kiritishni ta'minlashdir.
## Kod tavsifi
`Taomlar` turi uchun bir `enum` turi (Taomlar) yaratilgan , bu turga quyidagi qiymatlar (`Osh`, `Manti`, `Somsa`) tushuntirilgan.
`Taomlar` turi yaratilgan va uning qiymatlariga murojaat qilib, shu qiymatlardan biri `Somsa` taom o'zgaruvchiga tushirilgan. Keyin esa taom o'zgaruvchisini chop etadi.
```console
2
```
## Ko'rsatmalar
### Ma'nosi:
Enumaratsiya turi, aniqlangan qiymatlar to'plami.
### Hajmi:
Aniqlangan qiymatlar soniga qarab o'zgaradi.
### Oraliq:
Aniqlangan qiymatlar oralig'ida.
### Foydalanish:
```cpp
enum Color { RED, GREEN, BLUE };
```
