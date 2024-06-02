# C++ da map oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> jadval = {
    {"Pardayev",1},{"Maxsudbek",2},{"G'ulomjon o'g'li",3}
    };// std::map yaratish va boshlang'ich qiymatlarni kiritish
    cout << "So'z va tartibi:" << endl;// std::map elementlarini chop etish
    for (const auto& pair : ismlar) {
        cout << pair.first << " <-> " << pair.second << "- o'rin" << endl;
    }
}
```
Ushbu C++ dasturi `map` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## map Tipi
C++ dasturlash tilida `map` turi kalitlar va qiymatlar jadvalidini ifodalash uchun ishlatiladi. `map` turidagi o'zgaruvchilar kalit va qiymatlardan iborat bo'lib, kalitlar unikal bo'lishi kerak. 
Bu turdagi o'zgaruvchilar kalitlar bo'yicha tartiblangan ro'yxatlarni boshqarish uchun ishlatiladi.
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
Kalit-qiymat juftlari (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Kalit va qiymat turlariga bog'liq.
### Foydalanish:
```cpp
map<string, int> a;
```
