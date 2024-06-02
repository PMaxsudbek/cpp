# C++ da union oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
// Union turi uchun
union Data { int i; float f; char c; };
int main() {
    Data malumot;
    malumot.i = 10;// Qiymat bermoq
    // Union ichidagi i qiymatni chop etish
    cout << "Butun qiymati: " << malumot.i << endl;
    // Union ichidagi f qiymatni chop etish
    malumot.f = 3.14;// Qiymat bermoq
    cout << "Haqiqiy qiymati: " << malumot.f << endl;
    // Union ichidagi c qiymatni chop etish
    malumot.c = 'A';// Qiymat bermoq
    cout << "Belgi qiymati: " << malumot.c << endl;
    return 0;
}
```
Ushbu C++ dasturi `union` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## union Tipi
C++ tilida ma'lumotlar turini yaxshilash uchun ishlatiladi. U ma'lum bir xotiraning bir qismini qo'llab-quvvatlaydi va har qanday turdagi ma'lumotni o'zida saqlayishi mumkin. 
Bu, xotiradagi qat'iy qismga murojaat qilishni ta'minlaydi.
`union` tipidan foydalanishda ixtiyot bo'ling qiymatlar bir vaqting uzida berilsa xatolik beradi.
Misol:
```cpp
malumot.i = 10;
malumot.f = 3.14;
malumot.c = 'A';
```
Bunday qo'llash xatoliklar olib kelishi mumkin.
## Kod tavsifi
Data nomli union turi yaratilgan. Bu turi uch turdagi ma'lumotlarni saqlashi mumkin: int (i), float (f) va char (c). 
Qat'iy qism qabul qiluvchilardan tushunish uchun, dastur i, f, va c o'zgaruvchilariga turli qiymatlar tushiriladi.
```console
Butun qiymati: 10
Haqiqiy qiymati: 3.14
Belgi qiymati: A
```
## Ko'rsatmalar
### Ma'nosi:
Birdaniga faqat bitta qiymatni ushlaydi (har xil turlari uchun).
### Hajmi:
Eng katta element hajmiga qarab.
### Oraliq:
Bir vaqtning o'zida faqat bitta qiymat.
### Foydalanish:
```cpp
union Data { int i; float f; char c; };
```
