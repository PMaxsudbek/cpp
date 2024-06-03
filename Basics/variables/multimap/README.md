# C++ da multimap oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<int, string> raqamlar; // int kalit va string qiymat uchun multimap yaratish
    // multimap ga kalit-qiymat juftlarini kiritish
    raqamlar.insert(pair<int, string>(1, "Bir"));
    raqamlar.insert(pair<int, string>(2, "Ikki"));
    raqamlar.insert(pair<int, string>(1, "One"));
    raqamlar.insert(pair<int, string>(3, "Uch"));
    raqamlar.insert(pair<int, string>(2, "Two"));
    // multimap dagi elementlarni chiqarish
    for (const auto &i : raqamlar) {
        cout << "Kalit: " << i.first << ", Qiymat: " << i.second << endl;
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `multimap` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## multimap Tipi
C++ standart kutubxonasida mavjud bo'lgan bir konteyner bo'lib, u kalit-qiymat juftlarini saqlaydi va bitta kalitga bir nechta qiymatlarni biriktirishga imkon beradi.
`multimap` elementlarni tartiblangan holda saqlaydi va bir xil kalitlar takrorlanishi mumkin.
## Kod tavsifi
Bu dasturda `jadval` nomli `multimap<int, string>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida 
{{`1`,`"Bir"`},{`2`,`"Ikki"`},{`1`,`"One"`},{`3`,`"Uch"`},{`2`,`"Two"`}} massividan foydalaniladi va chop etiladi.
```console
Kalit: 1, Qiymat: Bir
Kalit: 1, Qiymat: One
Kalit: 2, Qiymat: Ikki
Kalit: 2, Qiymat: Two
Kalit: 3, Qiymat: Uch
```
## Ko'rsatmalar
### Ma'nosi:
Tartiblangan ko'p kalitli xarita (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Kalit va qiymat turlariga bog'liq, takrorlanishi mumkin.
### Foydalanish:
```cpp
multimap<string, int> a;
```
