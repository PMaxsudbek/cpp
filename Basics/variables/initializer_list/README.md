# C++ da initializer_list oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;
int main() {
    initializer_list<int> r = {1, 2, 3, 4, 5};
    cout << "Initializer_list: ";
    for (auto elem : r) {
        cout << elem << " ";
    }
    cout << endl;
    vector<int> v(r);
    cout << "Vector: ";
    for (auto elem : v) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `initializer_list` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## initializer_list Tipi
C++11 dan boshlab, std::initializer_list C++ tiliga kiritilgan bo'lib, ob'ektlarni boshlang'ich qiymatlar bilan to'ldirishning 
qulay va izchil usulini taqdim etadi.
Bu sinf asosan konteyner sinflarini va boshqa funksiya chaqiruvlarini qulayroq va aniqroq qilish uchun ishlatiladi.
## Kod tavsifi
`initializer_list<int>` obyekti yaratiladi va {`1`, `2`, `3`, `4`, `5`} qiymatlari bilan boshlanadi va chop etiladi.
```console
Initializer_list: 1 2 3 4 5
Vector: 1 2 3 4 5

```
## Ko'rsatmalar
### Ma'nosi:
Boshlang'ich ro'yxat (initializer list) - ob'ektlarni boshlang'ich qiymatlash.
### Hajmi:
Boshlang'ich elementlar soniga qarab.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
initializer_list<int> a;
```
# Qo'shimcha :)
## Kod
```cpp
#include <iostream>
#include <initializer_list>
#include <vector>

class MyClass {
public:
    MyClass(std::initializer_list<int> list) {
        for (auto elem : list) {
            data.push_back(elem);
        }
    }

    void print() const {
        for (auto elem : data) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> data;
};

int main() {
    MyClass obj = {1, 2, 3, 4, 5}; // std::initializer_list yordamida ob'ekt yaratish
    obj.print();

    return 0;
}
```
Bu kodda:
- `MyClass` sinfi `initializer_list<int>` yordamida yaratiladi.
- Konstruktor `initializer_list` dan qiymatlarni qabul qilib, ularni `vector<int>` ichiga ko'chiradi.
- `print` metodi `vector` ichidagi elementlarni ekranga chiqaradi.
- `MyClass` obyekti {`1`, `2`, `3`, `4`, `5`} qiymatlari bilan yaratiladi va ekranga chiqariladi.
### Nima uchun initializer_list kerak?
- ##### Qulay va tushunarli sintaksis:
   Bu struktura orqali bir nechta qiymatlarni bitta konteyner yoki funksiya chaqiruviga qulaylik bilan uzatish mumkin.
- ##### Konteyner sinflari bilan qulay ishlash:
   `vector`, `array`, `map`, va boshqa konteyner sinflar `initializer_list` ni qabul qilish uchun konstruktorlarga ega, bu esa ularni boshlang'ich qiymat bilan to'ldirishni osonlashtiradi.
- ##### Funksiyalarga bir nechta argument uzatish:
   Funksiyalarga bir nechta bir xil turdagi argumentlarni uzatish kerak bo'lganda `initializer_list` dan foydalanish qulaylik beradi.
