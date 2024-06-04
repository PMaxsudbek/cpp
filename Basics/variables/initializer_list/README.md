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
