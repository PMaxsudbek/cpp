# C++ da unordered_multimap oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_multimap<int, string> raqamlar; // int kalit va string qiymat uchun unordered_multimap yaratish
    // unordered_multimap ga kalit-qiymat juftlarini kiritish
    raqamlar.insert(pair<int, string>(1, "Bir"));
    raqamlar.insert(pair<int, string>(2, "Ikki"));
    raqamlar.insert(pair<int, string>(1, "One"));
    raqamlar.insert(pair<int, string>(3, "Uch"));
    raqamlar.insert(pair<int, string>(2, "Two"));
    // unordered_multimap dagi elementlarni chiqarish
    for (const auto &i : raqamlar) {
        cout << "Kalit: " << i.first << ", Qiymat: " << i.second << endl;
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `unordered_multimap` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## unordered_multimap Tipi
C++ standart kutubxonasida mavjud bo'lgan bir konteyner bo'lib, u kalit-qiymat juftlarini saqlaydi va 
bitta kalitga bir nechta qiymatlarni biriktirishga imkon beradi. `unordered_multimap` hash funksiyasi yordamida elementlarni joylashtiradi,
bu esa elementlarni qidirish, qo'shish va o'chirish operatsiyalarini samarali qiladi.
Elementlar tartibsiz holda saqlanadi.
## Kod tavsifi
Bu dasturda `jadval` nomli `unordered_multimap<int, string>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida 
{{`1`,`"Bir"`},{`2`,`"Ikki"`},{`1`,`"One"`},{`3`,`"Uch"`},{`2`,`"Two"`}} massividan foydalaniladi va chop etiladi.
```console
Kalit: 3, Qiymat: Uch
Kalit: 1, Qiymat: One
Kalit: 1, Qiymat: Bir
Kalit: 2, Qiymat: Two
Kalit: 2, Qiymat: Ikki
```
## Ko'rsatmalar
### Ma'nosi:
Tartibsiz ko'p kalitli xarita (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Kalit va qiymat turlariga bog'liq, takrorlanishi mumkin.
### Foydalanish:
```cpp
unordered_multimap<string, int> a;
```
