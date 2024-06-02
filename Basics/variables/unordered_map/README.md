# C++ da unordered_map oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, int> ismlar = {
    {"Pardayev",1},{"Maxsudbek",2},{"G'ulomjon o'g'li",3}
    };// std::unordered_map yaratish va boshlang'ich qiymatlarni kiritish
    cout << "So'z va tartibi:" << endl;// std::unordered_map elementlarini chop etish
    for (const auto& pair : ismlar) {
        cout << pair.first << " <-> " << pair.second << "- o'rin" << endl;
    }
}

```
Ushbu C++ dasturi `unordered_map` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## unordered_map Tipi
C++ dasturlash tilida `unordered_map` turi kalitlar va qiymatlar jadvalidini ifodalash uchun ishlatiladi. 
`unordered_map` turidagi o'zgaruvchilar kalit va qiymatlardan iborat bo'lib, kalitlar unikal bo'lishi kerak. 
Bu turdagi o'zgaruvchilar kalitlar bo'yicha tartiblangan ro'yxatlarni boshqarish uchun ishlatiladi. 
`unordered_map` kalitlar ustida boshqarish uchun qulay va tez foydalaniladi.
## Kod tavsifi
Bu dasturda `jadval` nomli `map<string, int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida 
{{`"Pardayev"`,`1`},{`"Maxsudbek"`,`2`},{`"G'ulomjon o'g'li"`,`3`}} massividan foydalaniladi va chop etiladi.
```console
So'z va tartibi:
G'ulomjon o'g'li <-> 3- o'rin
Maxsudbek <-> 2- o'rin
Pardayev <-> 1- o'rin
```
## Ko'rsatmalar
### Ma'nosi:
Tartibsiz kalit-qiymat juftlari (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Kalit va qiymat turlariga bog'liq.
### Foydalanish:
```cpp
unordered_map<string, int> a;
```
