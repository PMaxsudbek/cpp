# C++ da steady_clock oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <chrono>
#include <thread>
int main() {
    using namespace std::chrono;
    //Bu yerda ishlatilgan!
    steady_clock::time_point start = steady_clock::now();
    std::this_thread::sleep_for(seconds(1));
    //Bu yerda ishlatilgan!
    steady_clock::time_point end = steady_clock::now();
    duration<double> del = end - start;
    std::cout << "Farq: " << del.count() << " seconds\n";
    return 0;
}

```
Ushbu C++ dasturi `steady_clock` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## steady_clock nomlar fazosi
`std::chrono::steady_clock` `C++11` da joriy qilingan va real vaqtda ishlashda aniq vaqtni o'lchash uchun ishlatiladigan soat hisoblanadi. 
`steady_clock` ning asosiy xususiyati shundaki, u monoton (monotonic) hisoblanadi, ya'ni vaqt hech qachon orqaga qaytmaydi yoki sakrab qolmaydi. 
Bu turli xil vaqtdan bog'liq bo'lgan operatsiyalarni, masalan, vaqtni o'lchash yoki taymerlarni amalga oshirish uchun juda muhimdir.
## Kod tavsifi
Kod natijasi:
```console
Farq: 1.0077 seconds

```
### Bu shunchaki oqimni vaqtincha uxlatish :)
## Ko'rsatmalar
### Ma'nosi:
O'zgarmas vaqt hisoblagichi (steady clock).
### Hajmi:
Vaqt hisoblash uchun zarur xotira.
### Oraliq:
Har xil vaqt birliklari uchun.
### Foydalanish:
```cpp
std::chrono::steady_clock::time_point a;
```
