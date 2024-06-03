# C++ da pair oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <utility>
using namespace std;
int main() {
    // pair yaratish
    pair<int, string> jadvalcha(1, "Hello");
    // pair elementlariga kirish
    cout << "First: " << jadvalcha.first << endl;
    cout << "Second: " << jadvalcha.second << endl;
    return 0;
}
```
Ushbu C++ dasturi `pair` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## pair Tipi
C++ da `pair` konteyneri ikkita qiymatni birga saqlash uchun ishlatiladi. Bu qiymatlar turli tiplarda bo'lishi mumkin. `pair` ko'pincha qaytarish qiymati sifatida yoki
konteyner ichida ikkita bog'liq qiymatni saqlash uchun ishlatiladi.
## Kod tavsifi
Bu dasturda `jadvalcha` nomli `pair<int, string>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1` va `"Hello"` foydalaniladi va chop etiladi.
```console
First: 1
Second: Hello
```
## Ko'rsatmalar
### Ma'nosi:
Ikki qiymatning jufti (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga va turlariga qarab o'zgaradi.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
pair<int, string> a;
```
