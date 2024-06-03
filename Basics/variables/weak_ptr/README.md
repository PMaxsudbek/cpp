# C++ da weak_ptr oʻzgaruvchisiga misol
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
    shared_ptr<Test> p1 = make_shared<Test>();
    weak_ptr<Test> p2 = p1; // weak_ptr p1 bilan bir xil resursga ishora qiladi
    // weak_ptr ni tekshirish va lock qilish
    if (shared_ptr<Test> p3 = p2.lock()) {
        p3->show();
        cout << "Resurs hali ham mavjud." << endl;
    } else {
        cout << "Resurs mavjud emas." << endl;
    }
    p1.reset(); // shared_ptr ni ozod qilish, resurs ozod qilinadi
    // weak_ptr ni qayta tekshirish
    if (shared_ptr<Test> p3 = p2.lock()) {
        p3->show();
        cout << "Resurs hali ham mavjud." << endl;
    } else {
        cout << "Resurs mavjud emas." << endl;
    }
    return 0;
}
```
Ushbu C++ dasturi `weak_ptr` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## weak_ptr Tipi
`C++ 11` dan boshlab mavjud bo'lgan `C++` standart kutubxonasidagi aqlli ko'rsatkich (smart pointer) turi bo'lib,
u resurslarga zaif ishoralarni (`weak references`) boshqarish uchun ishlatiladi. `weak_ptr` ning asosiy maqsadi, ko'rsatkichlar o'rtasida aylanma ishoralar (circular references) hosil bo'lishini oldini olishdir. `weak_ptr` bir nechta `shared_ptr` ko'rsatkichlar bilan bir xil resursga ishora qilishi mumkin, 
lekin resursni boshqarish va uning umrini uzaytirish imkoniyatiga ega emas.
## Kod tavsifi
`weak_ptr` dan resursni qayta olish va tekshirish:
```cpp
if (shared_ptr<Test> p3 = p2.lock()) { ... }
```
`p2` orqali resursni yana tekshirish va olish, agar resurs mavjud bo'lsa.
```console
Test obyekti yaratildi
Test show() metodi
Resurs hali ham mavjud.
Test obyekti yo'q qilindi
Resurs mavjud emas.
```
## Ko'rsatmalar
### Ma'nosi:
Zaif ko'rsatgich (shared_ptr ga asoslangan, smart pointer).
### Hajmi:
Ko'rsatilgan ob'ekt hajmi.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
weak_ptr<int> a;
```
