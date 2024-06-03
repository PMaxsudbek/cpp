# C++ da set oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> raqamlar; // int tipidagi sonlar uchun set yaratish
    // 5 ta sonni set ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(5);
    raqamlar.insert(4);
    for (int i : raqamlar) {// set dagi elementlarni chiqarish
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `set` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## set Tipi
C++ standart kutubxonasida mavjud bo'lib, u ma'lumotlarni tartiblangan va yagona (bir xil elementlar faqat bir marta saqlanadi) holda saqlaydi. 
`set` konteyneri elementlarni avtomatik ravishda tartiblaydi va qidiruv operatsiyalari uchun samarali.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `set<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `3`, `2`, `5` va `4` foydalaniladi va chop etiladi.
```console
Raqamlar: 5 4 3 2 1
```
## Ko'rsatmalar
### Ma'nosi:
Tartiblangan to'plam (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
set<int> a;
```
