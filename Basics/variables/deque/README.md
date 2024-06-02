# C++ da deque oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <deque>
using namespace std;
int main() {
    deque<int> raqamlar = {1, 2, 3, 4, 5};// std::deque yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::deque elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `deque` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## deque Tipi
`deque` (`double-ended queue` - `ikki tomonlama navbat`) C++ standart kutubxonasida mavjud bo'lgan bir turdir. Bu tur, elementlarga ikki tomondan (`front` va `back`) kirish va chiqish imkonini beradi.
`deque` `list` va `vector` turidan farq qiladi, chunki u barcha elementlarga boshidan va oxiridan tez kirish va chiqish imkonini beradi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `deque<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida {`1`, `2`, `3`, `4`, `5`} massividan foydalaniladi va chop etiladi.
```console
Raqamlar: 1 2 3 4 5 
```
## Ko'rsatmalar
### Ma'nosi:
Ikki tomonlama kirish qatori (double-ended queue, standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
deque<int> a;
```
