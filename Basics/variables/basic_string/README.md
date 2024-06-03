# C++ da basic_string oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    // std::basic_string<char> ni std::string sifatida ishlatish
    basic_string<char> a = "Salom, dunyo!";
    cout << a << endl;
    return 0;
}
```
Ushbu C++ dasturi `basic_string` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## basic_string tipi
`C++` tilida matnli ma'lumotlarni saqlash va boshqarish uchun ishlatiladigan asosiy ma'lumot turi hisoblanadi. 
U biz bilgan `string` ning asosidir. 
Bu tur xususan `C++` Standart Kutubxonasida umumiy maqsadli satr (string) sinfi sifatida ishlatiladi.
## Kod tavsifi
Bu dasturda `a` `basic_string` o`zgaruvchisi e`lon qilinadi va `Salom, dunyo!` qiymati bilan ishga tushirilib chop etiladi.
```console
Salom, dunyo!
```
## Ko'rsatmalar
### Ma'nosi:
Belgilar satri (generic string type).
### Hajmi:
Belgilar soniga qarab o'zgaradi.
### Oraliq:
Har xil turdagi belgilar uchun.
### Foydalanish:
```cpp
basic_string<char> a;// (yoki string a;)
```
