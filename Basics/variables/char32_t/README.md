# C++ da char32_t oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    char32_t belgi = U'A'; // char32_t tipida o'zgaruvchi e'lon qilish
    cout << "Belgi: " << char(belgi) << endl; // belgi o'zgaruvchisini chop etish
    return 0;
}

```
Ushbu C++ dasturi `char32_t` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## char32_t tipi
C++ dasturlash tilida kengroq simvollarni, xususan, `UTF-32` kodlashdagi simvollarni ifodalash uchun ishlatiladi. 
`char32_t` tipidagi o'zgaruvchilar 32-bitli kenglikdagi simvollarni ifodalaydi va xalqaro simvol to'plamlarini (masalan, har xil tillarning belgilarini) ifodalash uchun ishlatiladi. 
Bu belgilar odatda `UTF-32` kodlashuviga mos ravishda kodlanadi.
`char32_t` tipi aniq 4 bayt hajmga ega bo'lib, 32-bitli `Unicode` simvollarini ifodalash imkonini beradi.
## UTF-32
`UTF-32` - bu `Unicode` Transformatsiya Formatining 32-bitli versiyasi. 
Bu format dunyodagi barcha tillarning simvollarini ifodalash uchun ishlatiladi va keng ko'lamdagi simvollarni kodlash uchun mo'ljallangan.
## Kod tavsifi
Keng belgilar bilan ishlashda maxsus `U` prefiksi bilan belgilangan stringlar `(U"Salom")` ishlatiladi. 
Bu dasturda belgi `char32_t` o'zgaruvchisi e'lon qilinadi va konsolga chop etiladi.
`char32_t` tipidagi qiymatni chiqarish uchun uni `char` tipiga kasting qilinadi.
```console
Belgi: A 
```
## Ko'rsatmalar
### Ma'nosi:
UTF-32 Unicode belgilar turi.
### Hajmi:
4 bayt.
### Oraliq:
0 dan 4,294,967,295 gacha.
### Foydalanish:
```cpp
char32_t a;
```
