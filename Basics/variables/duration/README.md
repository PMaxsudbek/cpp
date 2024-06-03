# C++ da duration oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main() {
    // std::chrono::duration ni ishlatish
    duration<int> a(10); // int turi va 10 boshlang'ich qiymat
    duration<long, milli> b(3000); // long turi va 3000 millisekundlik boshlang'ich qiymat
    cout << a.count() << endl;
    cout << b.count() << endl;
    return 0;
}

```
Ushbu C++ dasturi `duration` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## duration Tipi
`C++` da vaqt davomatlari (time durations)ni ifodalash uchun ishlatiladi. Bu, shakl bo'lib, to'la obyektga oid turi emas.
`std::chrono::duration` turining asosiy maqsadi, bitta vaqt punktidan boshqa bitta vaqt punktiga o'tish davomati (elapsed time)ni ifodalash uchun ishlatiladi. 
Masalan, bitta ta'nlangan vaqt punktini olganingizda, uningdan boshlab boshqasiga qancha vaqt o'tganini boshqarish uchun foydalaniladi.
Masalan, siz bitta xuddi vaqt punktini olasiz (masalan, boshlang'ich vaqt). 
So'ngra, boshqa vaqtga o'tishni boshqa bir xuddi vaqt punktini olish orqali aniqlash uchun foydalanishingiz mumkin.
`std::chrono::duration` turiga ikki parameter beriladi: `Rep` va `Period`.
`Rep` - bu vaqt davomati turi, ya'ni bu uchun ishlatiladigan o'zgaruvchi turi (masalan, `int`, `long`, `double`).
`Period` - bu vaqt davomati miqdori, ya'ni boshqa vaqtning (masalan, `sekund`, `millisekund`, `mikrosekund`) o'lchamlari bilan qanday bog'liqligi.
## Kod tavsifi
Bu kodda, std::chrono::duration obyektlarini yaratish uchun tur va boshlang'ich qiymatlarni ko'rsatib o'rinlaymiz. 
a obyekti int turi va 10 boshlang'ich qiymatga ega bo'ladi. b obyekti long turi va 3000 millisekundlik boshlang'ich qiymatga ega bo'ladi.
```console
10
3000
```
## Ko'rsatmalar
### Ma'nosi:
Vaqt davomiyligi.
### Hajmi:
Vaqt birligi va davomiylikka qarab.
### Oraliq:
Har xil vaqt birliklari uchun.
### Foydalanish:
```cpp
duration<int> a;
duration<int, milli> a;
```
