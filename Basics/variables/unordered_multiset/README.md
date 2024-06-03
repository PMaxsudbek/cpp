# C++ da unordered_multiset oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_multiset<int> raqamlar; // int tipidagi sonlar uchun unordered_multiset yaratish
    // 5 ta sonni unordered_multiset ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(1);
    raqamlar.insert(2);
    cout << "Raqamlar :";// unordered_multiset dagi elementlarni chiqarish
    for (int i : raqamlar) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `unordered_multiset` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## unordered_multiset Tipi
C++ standart kutubxonasida mavjud bo'lib, elementlarni tartibsiz holda saqlaydi va bir xil qiymatli elementlarni bir necha marta saqlashga imkon beradi. 
`unordered_multiset` hash funksiyasi yordamida elementlarni joylashtiradi, bu esa elementlarni qidirish, qo'shish va o'chirish operatsiyalarini samarali qiladi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `unordered_multiset<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `3`, `2`, `1` va `2` foydalaniladi va chop etiladi.
```console
Raqamlar :2 2 1 1 3
```
## Ko'rsatmalar
### Ma'nosi:
Tartibsiz ko'plik (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun, takrorlanishi mumkin.
### Foydalanish:
```cpp
unordered_multiset<int> a;
```
