# C++ da queue oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> raqamlar; // int tipidagi sonlar uchun navbat yaratish
    raqamlar.push(1);
    raqamlar.push(2);
    raqamlar.push(3);
    raqamlar.push(4);
    raqamlar.push(5);
    while (!raqamlar.empty()) {// Navbatdagi elementlarni chiqarish
        cout << raqamlar.front() << " "; // Navbatdagi birinchi elementni chop etish
        raqamlar.pop(); // Navbatdan birinchi elementni o'chirish
    }
    cout << endl;
    return 0;
}

```
Ushbu C++ dasturi `queue` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## queue Tipi
C++ standart kutubxonasida mavjud bo'lgan bir konteyner adapteri.
U aslida boshqa konteyner (masalan, `deque` yoki `list`) obyektlarini o'z ichiga oladi va ularga istalgan vaqtda navbatning oldiga va orqasiga element qo'shish va olib tashlash imkonini beradi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `queue<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `2`, `3`, `4` va `5` foydalaniladi va chop etiladi.
```console
Raqamlar: 5 4 3 2 1
```
## Ko'rsatmalar
### Ma'nosi:
`FIFO` (`First-In, First-Out` - `Birinchi kirgan, Birinchi chiqadi`) stek (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
queue<int> a;
```
