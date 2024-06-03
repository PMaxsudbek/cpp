# C++ da unordered_set oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> raqamlar; // int tipidagi sonlar uchun unordered_set yaratish
    // 5 ta sonni unordered_set ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(5);
    raqamlar.insert(4);
    for (int i : raqamlar) {// unordered_set dagi elementlarni chiqarish
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `unordered_set` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## unordered_set Tipi
C++ standart kutubxonasida mavjud bo'lib, u elementlarni tartibsiz holda saqlaydi va qidiruv operatsiyalarini hash funksiyasi yordamida amalga oshiradi. 
`unordered_set` elementlarni o'z ichiga oladi, lekin ularni tartiblamaydi, `unordered_set` kiritilgan tartibni saqlamaydi. `unordered_set` elementi hash funksiyasi asosida joylashtiriladi va tartib hash funksiyasi natijasiga bog'liq bo'ladi. 
Shu sababli, `unordered_set` da saqlangan elementlar har doim tartibsiz bo'ladi va ular kiritilgan tartibda saqlanmaydi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `unordered_set<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `3`, `2`, `5` va `4` foydalaniladi va chop etiladi.
```console
4 5 2 1 3
```
## Ko'rsatmalar
### Ma'nosi:
Tartibsiz to'plam (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
unordered_set<int> a;
```
