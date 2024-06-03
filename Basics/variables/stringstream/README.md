# C++ da stringstream oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // stringstream yaratish
    stringstream ss;
    // Ma'lumotlarni stringga yozish
    int int_value = 123;
    double double_value = 4.56;
    string string_value = "Hello";
    ss << int_value << " " << double_value << " " << string_value;
    // Yaratilgan stringni olish
    string combined_string = ss.str();
    cout << "Combined string: " << combined_string << endl;
    // Stringdan ma'lumotlarni o'qish
    int extracted_int;
    double extracted_double;
    string extracted_string;
    ss >> extracted_int >> extracted_double >> extracted_string;
    cout << "Extracted integer: " << extracted_int << endl;
    cout << "Extracted double: " << extracted_double << endl;
    cout << "Extracted string: " << extracted_string << endl;

    return 0;
}
```
Ushbu C++ dasturi `stringstream` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## stringstream tipi
C++ standart kutubxonasidagi bir sinf bo'lib, u string (satr) bilan ishlash uchun o'rnatilgan kiritish va chiqarish 
oqimi (input/output stream) funksiyalarini taqdim etadi. Bu sinf `istringstream` va `ostringstream` sinflarining 
kombinatsiyasidir, ya'ni u bir vaqtning o'zida ham stringdan o'qish, ham stringga yozish imkonini beradi.
## Kod tavsifi
Siz `>>` operatori yordamida stringga turli ma'lumotlarni o'qishingiz mumkin.
```console
Combined string: 123 4.56 Hello
Extracted integer: 123
Extracted double: 4.56
Extracted string: Hello
```
## Ko'rsatmalar
### Ma'nosi:
String oqim - satrga yozish va o'qish uchun ikki tomonlama oqim.
### Hajmi:
Satr hajmiga qarab.
### Oraliq:
Har xil turdagi belgilar uchun.
### Foydalanish:
```cpp
stringstream a;
```
