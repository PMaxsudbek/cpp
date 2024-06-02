# C++ da array oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int, 5> raqamlar = {1, 2, 3, 4, 5};// std::array yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::array elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
}
```
Ushbu C++ dasturi `array` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## array Tipi
C++ dasturlash tilida `array` turi statik massivlarni ifodalash uchun ishlatiladi. `array` turidagi o'zgaruvchilar elementlarni qo'shish va ularga kirishni qulay va samarali amalga oshirish imkonini beradi. 
Bu turdagi o'zgaruvchilar odatda massivlar bilan ishlashni osonlashtiradi, chunki ular o'lchami oldindan belgilanadi va o'zgarmaydi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `array<int, 5>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida {`1`, `2`, `3`, `4`, `5`} massividan foydalaniladi va chop etiladi.
```console
Raqamlar: 1 2 3 4 5 
```
## Ko'rsatmalar
### Ma'nosi:
O'lchami belgilangan massiv (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
array<int, 5> a;
```
