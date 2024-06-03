# C++ da unique_ptr oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <memory>
using namespace std;
class Test {
public:
    Test() { cout << "Test obyekti yaratildi" << endl; }
    ~Test() { cout << "Test obyekti yo'q qilindi" << endl; }
    void show() { cout << "Test show() metodi" << endl; }
};
int main() {
    // unique_ptr yaratish
    unique_ptr<Test> p1(new Test());
    p1->show();
    // unique_ptr ni ko'chirish (move)
    unique_ptr<Test> p2 = move(p1);
    if (!p1) {
        cout << "p1 hozirda null ishora qilmoqda" << endl;
    }
    p2->show();
    // unique_ptr ga yangi resurs biriktirish
    p2.reset(new Test()); // Avvalgi resurs avtomatik ravishda ozod qilinadi
    p2->show();
    // unique_ptr ni o'chirish
    p2.reset(); // Resurs ozod qilinadi
    if (!p2) {
        cout << "p2 hozirda null ishora qilmoqda" << endl;
    }
    return 0;
}
```
Ushbu C++ dasturi `unique_ptr` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## unique_ptr Tipi
`C++11` dan boshlab mavjud bo'lgan `C++` standart kutubxonasidagi aqlli ko'rsatkich (smart pointer) turi bo'lib, 
u dinamik xotira boshqarish uchun ishlatiladi. `unique_ptr` ning asosiy xususiyati shundaki, u xotirani boshqarishda yagona egalik (`unique ownership`) tamoyiliga amal qiladi, ya'ni faqat bitta `unique_ptr` ko'rsatkich bir vaqtning o'zida bitta resursga ega bo'lishi mumkin. 
Bu, resursning tasodifan ikki marta ozod qilinishini oldini oladi.
## Kod tavsifi
`unique_ptr` yaratish:
```cpp
unique_ptr<Test> p1(new Test());
```
Test obyekti yaratilib, `p1` `unique_ptr` ga biriktiriladi.
```cpp
p1->show();
```
 — `p1` orqali obyektga murojaat qilish.
```console
Test obyekti yaratildi
Test show() metodi
p1 hozirda null ishora qilmoqda
Test show() metodi
Test obyekti yaratildi
Test obyekti yo'q qilindi
Test show() metodi
Test obyekti yo'q qilindi
p2 hozirda null ishora qilmoqda
```
## Ko'rsatmalar
### Ma'nosi:
Yagona ko'rsatgich (smart pointer).
### Hajmi:
Ko'rsatilgan ob'ekt hajmi.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
unique_ptr<int> a = make_unique<int>(10);
```
