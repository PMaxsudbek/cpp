# C++ da istringstream oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // Input string
    string input = "Hello, World!";
    // istringstream ni yaratish
    istringstream iss(input);
    // Turli ma'lumotlarni oqimdan o'qish
    int integer_value;
    double double_value;
    string string_value;
    iss >> integer_value >> double_value >> string_value;
    // O'qilgan qiymatlarni chop etish
    cout << "Integer value: " << integer_value << endl;
    cout << "Double value: " << double_value << endl;
    cout << "String value: " << string_value << endl;
    return 0;
}
```
Ushbu C++ dasturi `istringstream` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## istringstream tipi
C++ standart kutubxonasida mavjud bo'lgan sinf bo'lib, u string (satr) dan o'qish imkonini beradi. 
Bu sinf, o'z nomidan ko'rinib turibdiki, input stream (kirish oqimi) kabi harakat qiladi, lekin stringdan ma'lumot o'qish uchun ishlatiladi. `istringstream` asosan matnli ma'lumotlarni parchalash
(parsing), stringdan turli tipdagi ma'lumotlarni o'qib olish va stringlarni strukturalarga ajratish uchun ishlatiladi.
## Kod tavsifi
Bu dasturda `istringstream` obyekti yaratilib, unga `input` `string` uzatiladi.
Oqimdan ma'lumotlarni o'qish: `>>` operatori yordamida `integer`, `double` va `string` qiymatlar input stringdan o'qib olinadi.
O'qilgan qiymatlarni chop etish: O'qib olingan qiymatlar ekranga chiqariladi.
```console
Integer value: 0
Double value: 3.17274e-317
String value:
```
## Ko'rsatmalar
### Ma'nosi:
String oqim (input string stream) - satrdan o'qish uchun oqim.
### Hajmi:
O'qiladigan satr hajmiga qarab.
### Oraliq:
Har xil turdagi belgilar uchun.
### Foydalanish:
```cpp
istringstream a;
```
