# C++ da vector oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> raqamlar = {1, 2, 3, 4, 5};// Vector yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// Vectorning elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `vector` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## vector Tipi
C++ dasturlash tilida `vector` turi dinamik massivlarni ifodalash uchun ishlatiladi. `vector` turidagi o'zgaruvchilar elementlarni qo'shish, o'chirish va ularga kirishni qulay va samarali amalga oshirish imkonini beradi.
Bu turdagi o'zgaruvchilar odatda massivlar bilan ishlashni osonlashtiradi, chunki ular avtomatik ravishda o'z o'lchamini oshirishi yoki kamaytirishi mumkin.
## Kod tavsifi
Bu dasturda `raqamlar` nomli `vector<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida {`1`, `2`, `3`, `4`, `5`} massividan foydalaniladi va chop etiladi.
```console
Raqamlar: 1 2 3 4 5 
```
## Ko'rsatmalar
### Ma'nosi:
Dinamik massiv (standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
vector<int> a;
```
