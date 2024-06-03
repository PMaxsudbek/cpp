# C++ da shared_ptr oʻzgaruvchisiga misol
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
int main() {// shared_ptr yaratish
    shared_ptr<Test> p1(new Test());
    {
        shared_ptr<Test> p2 = p1; // p1 bilan p2 bir xil obyektga ishora qiladi
        cout << "p1 count: " << p1.use_count() << endl; // Reference count 2 bo'ladi
        cout << "p2 count: " << p2.use_count() << endl;
        p2->show();
    }// p2 yo'q qilinadi, reference count 1 ga kamayadi
    cout << "p1 count: " << p1.use_count() << endl; // Reference count 1 bo'ladi
    p1->show(); // Hali ham obyekt mavjud va foydalanish mumkin
    return 0; // p1 yo'q qilinadi, obyekt resurslari ozod qilinadi
}
```
Ushbu C++ dasturi `shared_ptr` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## shared_ptr Tipi
`C++ 11` dan boshlab mavjud bo'lgan `C++` standart kutubxonasidagi aqlli ko'rsatkich (smart pointer) turi bo'lib, 
u resurslarni boshqarish uchun avtomatik xotira boshqaruvini ta'minlaydi. `shared_ptr` bir nechta ko'rsatkichlar bir xil resursga ishora qilishiga imkon beradi va oxirgi ko'rsatkich yo'q qilinmaguncha resursni yo'q qilmaydi. 
Bu ko'pincha dinamik xotira ajratishni xavfsizroq va sodda qilish uchun ishlatiladi.
## Kod tavsifi
`shared_ptr` yaratish:
```cpp 
shared_ptr<Test> p1(new Test());
```
— Test obyekti yaratilib, `p1` `shared pointer`ga beriladi.
`{ shared_ptr<Test> p2 = p1; ... }` — `p1` bilan `p2` bir xil obyekti ishora qiladi. `use_count` `2` bo'ladi.
```console
Test obyekti yaratildi
p1 count: 2
p2 count: 2
Test show() metodi
p1 count: 1
Test show() metodi
Test obyekti yo'q qilindi
```
## Ko'rsatmalar
### Ma'nosi:
Birgalikda foydalaniladigan ko'rsatgich (smart pointer).
### Hajmi:
Ko'rsatilgan ob'ekt hajmi.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
shared_ptr<int> a = make_shared<int>(10);
```
