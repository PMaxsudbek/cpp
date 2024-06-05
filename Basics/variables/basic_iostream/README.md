# C++ da basic_iostream oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <fstream>
int main() {
    std::fstream file("test.txt", std::ios::in | std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        std::cerr << "Fayl ochilmadi!" << std::endl;
        return 1;
    }
    std::basic_iostream<char> a(file.rdbuf()); // fstream oqimidan foydalanish
    // Faylga yozish
    a << "Bu faylga o'qish va yozish mumkin :)" << std::endl;
    // Fayl o'qish uchun qayta joylashish
    file.seekg(0, std::ios::beg);
    // Fayldan o'qish
    std::string line;
    while (std::getline(a, line)) {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}
```
Ushbu C++ dasturi `basic_iostream` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## basic_iostream tipi
C++ STL (Standart Template Library) dagi andozali sinfdir va char turiga xos versiyasi esa `basic_iostream<char>` yoki oddiygina `iostream` deb ataladi. 
Bu sinf `istream` va `ostream` sinflarini meros qilib oladi va ularning funksionalliklarini birlashtiradi.
## Kod tavsifi
Yuqoridagi misolda, std::fstream yordamida `basic_iostream<char>` funksional imkoniyatlarini ko'rishingiz mumkin. 
Fayl ochilgach, dastlab unga yoziladi va keyin o'qish uchun qayta o'rnatiladi (seekg yordamida).

`test.txt`
```console
Hello, file!
```
->->->

`test.txt`
```console
Bu faylga o'qish va yozish mumkin :)
```
## Ko'rsatmalar
### Ma'nosi:
Ikkilamchi oqim (input/output stream) - kirish va chiqish oqimi tipi.
### Hajmi:
Oqim boshqarish uchun zarur xotira.
### Oraliq:
Har xil turdagi oqimlar uchun.
### Foydalanish:
```cpp
basic_iostream<char> a;
```
