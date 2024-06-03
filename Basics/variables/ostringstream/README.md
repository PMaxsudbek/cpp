# C++ da ostringstream oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // std::ostringstream ni yaratish
    ostringstream oss;
    // Turli qiymatlarni oqimga yozish
    int yil = 2024;
    string oy = "Iyun";
    int kun = 3;
    oss << "Bugun sana: " << kun << " " << oy << " " << yil;
    // Yig'ilgan satrni olish
    string natija = oss.str();
    // Natijani chop etish
    cout << natija << endl;
    return 0;
}
```
Ushbu C++ dasturi `ostringstream` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## Kod tavsifi
Bu dasturda `oss` `ostringstream` o`zgaruvchisi e`lon qilinadi va 
```cpp
oss << "Bugun sana: " << kun << " " << oy << " " << yil;
```
 bilan ishga tushirilib chop etiladi.
```console
Bugun sana: 3 Iyun 2024
```
## Ko'rsatmalar
### Ma'nosi:
String oqim (output string stream) - satrga yozish uchun oqim.
### Hajmi:
Yoziladigan satr hajmiga qarab.
### Oraliq:
Har xil turdagi belgilar uchun.
### Foydalanish:
```cpp
ostringstream a;
```
