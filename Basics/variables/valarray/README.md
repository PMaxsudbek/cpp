# C++ da valarray oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <valarray>
using namespace std;
int main() {
    valarray<int> a = {1, 2, 3, 4, 5};
    cout << "Valarray: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;
    a += 2;
    cout << "Ikkini qo'shgandan so'ng: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;
    a *= 3;
    cout << "Uchni ko'paytirgandan so'ng: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `valarray` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## valarray Tipi
C++ standart kutubxonasida mavjud bo'lgan, o'zgaruvchan hajmli massivlarni (array) boshqarish uchun ishlatiladigan sinfdir. 
Bu sinf yuqori samaradorlik bilan matematik operatsiyalarni bajarish uchun mo'ljallangan va indekslash orqali oddiy massivlar kabi ishlatilishi mumkin. 
`valarray` ko'pincha vektor operatsiyalarini bajarishda yoki parallel hisob-kitoblarni amalga oshirishda foydali bo'ladi.
## Kod tavsifi
- `valarray<int>` obyekti yaratiladi va {`1`, `2`, `3`, `4`, `5`} qiymatlari bilan boshlanadi.
- Har bir elementga `2` qo'shiladi.
- Har bir element `3` ga ko'paytiriladi.
```console
Valarray: 1 2 3 4 5
Ikkini qo'shgandan so'ng: 3 4 5 6 7
Uchni ko'paytirgandan so'ng: 9 12 15 18 21

```
## Ko'rsatmalar
### Ma'nosi:
Matematik operatsiyalar uchun massiv.
### Hajmi:
Elementlar soniga qarab.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
valarray<int> a;
```
