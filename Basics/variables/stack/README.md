# C++ da stack oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> raqamlar; // std::stack yaratish
    raqamlar.push(1); // Boshlang'ich qiymatlarini qo'shish
    raqamlar.push(2);
    raqamlar.push(3);
    raqamlar.push(4);
    raqamlar.push(5);
    cout << "Raqamlar: "; // std::stack elementlarini chop etish
    while (!raqamlar.empty()) {
        cout << raqamlar.top() << " "; // Oxirgi elementni chiqarish
        raqamlar.pop(); // Oxiridagi elementni olib tashlash
    }
    cout << endl;
    return 0;
}

```
Ushbu C++ dasturi `stack` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## stack Tipi
C++ standart kitobxonasida mavjud bo'lgan bir konteyner adapteri. 
U aslida boshqa konteyner (masalan, `deque`, `vector`, yoki `list`) obyektlarini o'z ichiga oladi va ularga istalgan vaqtda yuqori darajadagi amallarni bajarish imkonini beradi.
`stack` asosan keng ko'rinishdagi boshqaruvda eng kichik elementni yuqori darajadagi amallar bilan bajarish uchun foydalaniladi. Masalan, oxirgi kiritilgan elementni olish `top`, yangi element qo'shish `push`, oxirgi elementni olib tashlash `pop` va boshqalar kabi amallar.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `stack<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `2`, `3`, `4` va `5` foydalaniladi va chop etiladi.
```console
Raqamlar: 5 4 3 2 1
```
## Ko'rsatmalar
### Ma'nosi:
`LIFO` (`Last-In, First-Out` - `Oxirgi kirgan, Birinchi chiqadi`) stek (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
stack<int> a;
```
