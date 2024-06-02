# C++ da bitset oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    bitset<8> bitlar("10101010"); // 8 bitli bitset o'zgaruvchisi e'lon qilish
    cout << "Bitlar: " << bitlar << endl;// bitset o'zgaruvchisini chop etish
    return 0;
}
```
Ushbu C++ dasturi `bitset` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## bitset Tipi
C++ dasturlash tilida `bitset` turi bitlarni saqlash va ular bilan ishlash uchun ishlatiladi. `bitset` turi belgilangan sonli bitlarni o'z ichiga oladi va ularni boshqarish imkonini beradi. 
Bu turdagi o'zgaruvchilar odatda bit darajasida operatsiyalarni bajarish uchun ishlatiladi.
## Kod tavsifi
Bu dasturda bitlar nomli `bitset` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `"10101010"` satridan foydalaniladi va chop etiladi.
```console
Bitlar: 10101010
```
## Ko'rsatmalar
### Ma'nosi:
Belgilangan hajmli bitlar to'plami.
### Hajmi:
Bitlar soniga qarab o'zgaradi.
### Oraliq:
Har bir bit 0 yoki 1.
### Foydalanish:
```cpp
std::bitset<N> a;
```
(N bitli bitlar to'plami uchun)
