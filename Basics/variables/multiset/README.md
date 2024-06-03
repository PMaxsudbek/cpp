# C++ da multiset oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> raqamlar; // int tipidagi sonlar uchun multiset yaratish
    // 5 ta sonni multiset ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(1);
    raqamlar.insert(2);
    cout << "Raqamlar : ";// multiset dagi elementlarni chiqarish
    for (int i : raqamlar) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `multiset` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## multiset Tipi
C++ standart kutubxonasida mavjud bo'lgan bir konteyner bo'lib, u bir xil qiymatli elementlarni bir necha marta saqlashga imkon beradi va elementlarni tartiblangan holda saqlaydi.
`multiset` da elementlar kiritilgan tartibda emas, balki tartiblangan holda saqlanadi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `multiset<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `3`, `2`, `1` va `2` foydalaniladi va chop etiladi.
```console
Raqamlar: 1 1 2 2 3
```
## Ko'rsatmalar
### Ma'nosi:
Tartiblangan ko'plik (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun, takrorlanishi mumkin.
### Foydalanish:
```cpp
multiset<int> a;
```
