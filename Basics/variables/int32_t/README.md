# C++ da int16_t oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <cstdint>
using namespace std;
int main() {
    int32_t son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}

```
Ushbu C++ dasturi `int32_t` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## \<cstdint\> bu kutubxona haqida qisqacha
### Ushbu kutubxona C++ standartlarida aniqlangan, standart int tipi amallarini bir-biriga mos ravishda aniqlash uchun ishlatiladi.
`<cstdint>` kutubxonasi, ma'lum bir bayt hajmga ega turli sonlarni aniqlash uchun 
`int8_t`, `int16_t`, `int32_t`, `int64_t` kabi `integer` tipilarni,
shuningdek, undagi odatiy va ularning `unsigned` versiyalarini, masalan, `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t` ni o'z ichiga oladi.
## Kod tavsifi
Bu dasturda `son` `int32_t` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
32-bitli butun son.
### Hajmi:
4 bayt.
### Oraliq:
-2147483648 dan 2147483647 gacha.
### Foydalanish:
int32_t a;
