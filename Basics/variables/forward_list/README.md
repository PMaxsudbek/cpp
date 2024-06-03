# C++ da forward_list oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    forward_list<int> raqamlar = {1, 2, 3, 4, 5};// std::forward_list yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::forward_list elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `forward_list` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## forward_list Tipi
C++ standart kitobxonasida mavjud bo'lgan bir konteyner turi. U, to'plamlar (lists) bo'limiga kiradi va qo'shimcha foydalanish imkonini beradi. 
Bu to'plam birlamchi yonalishli to'plamdur, yani elementlarni faqat bir tomondan (oldingi elementga) qo'shish va olish imkonini beradi.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `forward_list<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida {`1`, `2`, `3`, `4`, `5`} massividan foydalaniladi va chop etiladi.
```console
Raqamlar: 1 2 3 4 5 
```
## Ko'rsatmalar
### Ma'nosi:
Yagona bog'langan ro'yxat (singly linked list, standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
forward_list<int> a;
```
