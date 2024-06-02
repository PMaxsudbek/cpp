# C++ da wchar_t oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <cwchar>
using namespace std;
int main() {
    wchar_t wideStr[] = L"Hello\n\tWorld!";// Keng simvollarni o'z ichiga olgan massiv
    wcout << wideStr << endl;// Keng simvollarni konsolga chiqarish
    return 0;
}
```
Ushbu C++ dasturi `wchar_t` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## wchar_t tipi
C++ dasturlash tili uchun kengroq simvollarni, xususan, Unicode simvollarini ifodalash uchun ishlatiladi. U `wchar_t` tipidagi o'zgaruvchilar ko'proq joy talab qiladigan va xalqaro simvol to'plamlarini (masalan, har xil tillarning belgilarini) ifodalash uchun ishlatiladi. Bu belgilar odatda `Unicode` kodlashuviga mos ravishda kodlanadi.
## Unicode
`Unicode` - bu kompyuterlarda barcha tillar uchun umumiy simvol to'plamini belgilash uchun ishlatiladigan standart. `Unicode` har xil tillarning harflari, raqamlari, tinish belgilari va boshqa belgilar uchun standart raqamli qiymatlarni belgilaydi.
## Kod tavsifi
Bu dasturda `wideStr` `wchar_t` o\`zgaruvchisi e\`lon qilinadi va `wideStr` qiymati bilan chop etadi.
```console
Hello
    World!
```
## Ko'rsatmalar
### Ma'nosi:
Keng belgilar turi, kengaytirilgan Unicode belgilar uchun.
### Hajmi:
2 yoki 4 bayt (tizimga bog'liq).
### Oraliq:
Belgilar oraliqi tizimga bog'liq.
### Foydalanish:
```cpp
wchar_t a;
```
