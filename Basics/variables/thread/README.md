# C++ da thread oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
using namespace std;
void hello() {
    cout << "Salom, dunyo!" << endl;
}
int main() {
    // std::thread obyektini yaratish va boshlash
    thread t(hello);
    t.join();
    return 0;
}
```
Ushbu C++ dasturi `thread` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## thread tipi
C++ standart kitobxonasida mavjud bo'lgan, paralel ravishda bajarilishi kerak bo'lgan amallarni o'z ichiga oluvchi obyektni yaratish uchun ishlatiladi. 
Bu obyektga parallel ravishda bajarilishi kerak bo'lgan funktsiya yoki funktsiya obyekti beriladi va `thread` obyekti uni boshlash uchun yaratiladi.
## Kod tavsifi
Bu kod `hello()` funktsiyasini parallel ravishda boshlash uchun `thread` obyektini ishlatadi. 
`t.join()` bilan asosiy dasturni to'xtatishga qadar bajarishni kutadi.
```console
"Salom, dunyo!"
```
## Ko'rsatmalar
### Ma'nosi:
Oqim (thread) boshqarish uchun (standart kutubxona konteyneri).
### Hajmi:
Oqim boshqarish uchun zarur xotira.
### Oraliq:
Oqim boshqarish talablari uchun.
### Foydalanish:
```cpp
thread a;
```
