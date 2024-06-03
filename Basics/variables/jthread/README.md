# C++ da jthread oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
using namespace std;
void hello() {
    cout << "Salom, dunyo!" << endl;
}
int main() {
     // std::jthread obyektini yaratish va boshlash
    jthread t(print_message);
    // Bu yerda join() yoki detach() chaqirilishi shart emas, std::jthread avtomatik tarzda boshqaradi
    return 0; // std::jthread hayot tsikli tugaganda avtomatik ravishda join() chaqiriladi
}
```
Ushbu C++ dasturi `jthread` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## jthread tipi
C++20 standardiga kiritilgan `jthread` (joining thread) C++ da yangi tipdagi thread bo'lib, 
u avvalgi `thread` ga nisbatan osonroq va xavfsizroq ishlashni ta'minlaydi. 
`jthread` avtomatik ravishda threadni tugatadi, ya'ni obyekt hayot tsikli tugaganda thread avtomatik tarzda join qilinadi yoki detach qilinadi. 
Bu, xususan, threadlarni unutish natijasida yuzaga kelishi mumkin bo'lgan xatoliklarning oldini oladi.
## Kod tavsifi
Bu kod `hello()` funktsiyasini parallel ravishda boshlash uchun `jthread` obyektini ishlatadi.
```console
"Salom, dunyo!"
```
## Ko'rsatmalar
### Ma'nosi:
Yunaytirib tugatadigan oqim (joinable thread).
### Hajmi:
Oqim boshqarish uchun zarur xotira.
### Oraliq:
Oqim boshqarish talablari uchun.
### Foydalanish:
```cpp
jthread a;
```
