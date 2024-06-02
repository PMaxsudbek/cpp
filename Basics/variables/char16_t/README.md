# C++ da char16_t oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    char16_t belgi = u'A'; // char16_t tipida o'zgaruvchi e'lon qilish
    cout << "Belgi: " << char(belgi) << endl; // belgi o'zgaruvchisini chop etish
    return 0;
}
```
Ushbu C++ dasturi `char16_t` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## char16_t tipi
C++ dasturlash tilida kengroq simvollarni, xususan, `UTF-16` kodlashdagi simvollarni ifodalash uchun ishlatiladi. 
`char16_t` tipidagi o'zgaruvchilar 16-bitli kenglikdagi simvollarni ifodalaydi va xalqaro simvol to'plamlarini (masalan, har xil tillarning belgilarini) ifodalash uchun ishlatiladi.
Bu belgilar odatda `UTF-16` kodlashuviga mos ravishda kodlanadi.
`char16_t` tipi aniq 2 bayt hajmga ega bo'lib, 16-bitli `Unicode` simvollarini ifodalash imkonini beradi.
## UTF-16
`UTF-16` - bu `Unicode` Transformatsiya Formatining 16-bitli versiyasi. 
Bu format dunyodagi barcha tillarning simvollarini ifodalash uchun ishlatiladi va keng ko'lamdagi simvollarni kodlash uchun mo'ljallangan.
## Kod tavsifi
Bu dasturda belgi `char16_t` o'zgaruvchisi e'lon qilinadi va konsolga chop etiladi.
`char16_t` tipidagi qiymatni chiqarish uchun uni `char` tipiga kasting qilinadi.
```console
Belgi: A 
```
## Ko'rsatmalar
### Ma'nosi:
UTF-16 Unicode belgilar turi(16-bitli keng belgilar).
### Hajmi:
2 bayt.
### Oraliq:
0 dan 65,535 gacha.
### Foydalanish:
```cpp
char16_t a;
```
