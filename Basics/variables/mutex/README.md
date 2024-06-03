# C++ da mutex oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
// Global mutex obyekti
mutex mp;
void printNumbers() {
    // Mutex ni bo'g'lang
    //lock_guard<mutex> lock(mp);
    // Ishlatish mumkin bo'lgan kod qismi
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    // Birinchi tasma ochish
    thread t1(printNumbers);
    // Ikkinchi tasma ochish
    thread t2(printNumbers);
    // Tasmalar tugaguncha kuting
    t1.join();
    t2.join();
    return 0;
}

```
Ushbu C++ dasturi `mutex` o'zgaruvchisidan foydalanmasdan ishlatish.
## Kod tavsifi
Bu dasturda `2` ta oqim yaratilyabdi va `printNumbers` funksiyasini ishga tushuryabdi.
Bu ikki oqim bir vaqtda concolega murojaat qilsa ma'lumotlar taribsiz chiqib qoladi shuning oldini olish uchun `mutex` tipidan foydalanamiz.
Dastur natijasi:
```console
00 1 1 2 3 2 4 3  4


```
```cpp
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
// Global mutex obyekti
mutex mp;
void printNumbers() {
    // Mutex ni bo'g'lang
    lock_guard<mutex> lock(mp);
    // Ishlatish mumkin bo'lgan kod qismi
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    // Birinchi tasma ochish
    thread t1(printNumbers);
    // Ikkinchi tasma ochish
    thread t2(printNumbers);
    // Tasmalar tugaguncha kuting
    t1.join();
    t2.join();
    return 0;
}

```
Ushbu C++ dasturi `mutex` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `2` ta oqim yaratilyabdi va `printNumbers` funksiyasini ishga tushuryabdi.
Dastur natijasi:
```console
0 1 2 3 4
0 1 2 3 4
```
## mutex tipi
`C++` standart kutubxonasi (STL) ichida joylashgan sinf, paralel dasturlar va hujjatlarga hamkorlik qilish uchun ishlatiladi. 
Bu sinf, mavjud ma'lumotlarga hamkorlik qilish uchun tegishli bo'lgan hamkorlik-mechanizmini ta'minlaydi.
`mutex` obyektlari bo'g'langan dastur tugatilgandan so'ng, uchun joylar bilan foydalanishga ruxsat beradi. 
Bunday xolatda, boshqa dasturlar `mutex` obyektiga e'lon qilingan so'zlashuvchi joyda bo'g'lanishga urinib ko'radilar. 
Bu, mavjud ma'lumotlarga to'g'ridan-to'g'ri kirishni ta'minlaydi.
### Qisqa xulosa mutex bizga oqimlar o'rtasidagi tartibni taminlab beradi.
## Ko'rsatmalar
### Ma'nosi:
O'zaro bloklash (mutual exclusion) uchun ko'rsatilgan sinxronlash obyekti.
### Hajmi:
Sinxronlash mexanizmi uchun zarur xotira.
### Oraliq:
Sinxronlash talablari uchun.
### Foydalanish:
```cpp
mutex a;
```
