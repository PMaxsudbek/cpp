# C++ da tuple oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <tuple>
#include <string>
using namespace std;
int main() {
    // tuple yaratish
    tuple<int, double, string> tuple_(42, 3.14, "Hello, World!");
    // tuple elementlariga kirish
    cout << "int: " << get<0>(tuple_) << endl;
    cout << "double: " << get<1>(tuple_) << endl;
    cout << "string: " << get<2>(tuple_) << endl;
    // tuple ni qayta belgilash
    get<0>(tuple_) = 100;
    get<1>(tuple_) = 2.718;
    get<2>(tuple_) = "Goodbye, World!";
    // tuple elementlariga kirish
    cout << "Yangilash int: " << get<0>(tuple_) << endl;
    cout << "Yangilash double: " << get<1>(tuple_) << endl;
    cout << "Yangilash string: " << get<2>(tuple_) << endl;
    // tuple elementlarini olish
    int i;
    double d;
    string s;
    tie(i, d, s) = tuple_;
    // Olingan elementlarni chop etish
    cout << "i: " << i << endl;
    cout << "d: " << d << endl;
    cout << "s: " << s << endl;
    return 0;
}
```
Ushbu C++ dasturi `tuple` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## tuple Tipi
`C++ 11` dan boshlab, standart kutubxonaga tuple turi qo'shilgan bo'lib, u turli tipdagi bir nechta qiymatlarni bir joyda saqlash uchun ishlatiladi. 
`tuple` ning afzalligi shundaki, u bir xil yoki turli xil tiplarga ega qiymatlarni saqlashga imkon beradi. `tuple` `C++` da struktura va klasslarga muqobil bo'lishi mumkin, 
lekin ular avtomatik tarzda har xil tiplardagi qiymatlarni o'z ichiga oladi va ularni qaytarish yoki olish imkoniyatini beradi.
## Kod tavsifi
Bu dasturda `tuple_` nomli `tuple<int, double, string>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida 
`42`, `3.14`, `"Hello, World!"` foydalaniladi va chop etiladi.
```console
int: 42
double: 3.14
string: Hello, World!
Yangilash int: 100
Yangilash double: 2.718
Yangilash string: Goodbye, World!
i: 100
d: 2.718
s: Goodbye, World!
```
## Ko'rsatmalar
### Ma'nosi:
Turli xil turlarning kombinatsiyasi (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Kalit va qiymat turlariga bog'liq.
### Foydalanish:
```cpp
tuple<int, string, float> a;
```
