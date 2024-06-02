# C++ da list oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> raqamlar = {1, 2, 3, 4, 5};// std::list yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::list elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `list` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## list Tipi
C++ dasturlash tilida `list` turi ikki tomonlama bog'langan ro'yxatni ifodalash uchun ishlatiladi. `list` turidagi o'zgaruvchilar elementlarni qo'shish, o'chirish va ularga kirishni qulay va samarali amalga oshirish imkonini beradi. 
Bu turdagi o'zgaruvchilar odatda ro'yxatdagi elementlarni dinamik ravishda boshqarish uchun ishlatiladi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `list<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida {`1`, `2`, `3`, `4`, `5`} massividan foydalaniladi va chop etiladi.
```console
Raqamlar: 1 2 3 4 5 
```
## Ko'rsatmalar
### Ma'nosi:
Ikki tomonlama bog'langan ro'yxat (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
list<int> a;
```
