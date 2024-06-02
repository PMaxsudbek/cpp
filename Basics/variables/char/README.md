# C++ da char oʻzgaruvchisiga misol
```cpp
#include <iostream>
using namespace std;
int main() {
    char belgi = 'A'; // char tipida o'zgaruvchi e'lon qilish
    cout << "Belgi: " << belgi << endl; // belgi o'zgaruvchisini chop etish
    return 0;
}


```
Ushbu C++ dasturi `char` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## char tipi
C++ dasturlash tili uchun harflar va raqamlar kabi matnlarni ifodalash uchun ishlatiladi. U char tipida o'zgaruvchilar faqat bitta `belgi` (`harf`, `raqam` yoki `belgilar`ni ifodalash uchun boshqa `belgilar`) qabul qiladi. Bu belgilar ``ASCII`` kodlashuviga mos ravishda kodlashiladi.
char tipi 1 bayt hajmga ega (masalan, 8 bit) va unda eng kichik qiymat -128 va eng katta qiymat 127 bo'ladi.
## Kod tavsifi
Bu dasturda `belgi` `char` o\`zgaruvchisi e\`lon qilinadi va `belgi` qiymati bilan chop etadi.
```console
Belgi: A 
```
## Ko'rsatmalar
### Ma'nosi:
Belgilar.
### Hajmi:
1 bayt.
### Oraliq:
signed char: -128 dan 127 gacha.
unsigned char: 0 dan 255 gacha.
### Foydalanish:
char a;
