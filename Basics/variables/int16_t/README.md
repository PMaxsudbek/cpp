# C++ da int16_t oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <cstdint>
using namespace std;
int main() {
    int16_t son = 5;
    cout << "Son = " << son << endl;  // Boshlang'ich qiymatni chiqaradi
    son = 10;
    cout << "Son = " << son << endl;  // Yangilangan qiymatni chiqaradi
    return 0;
}

```
Ushbu C++ dasturi `int16_t` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## <cstdint> bu kutubxona haqida qisqacha
### Ushbu kutubxona C++ standartlarida aniqlangan, standart int tipi amallarini bir-biriga mos ravishda aniqlash uchun ishlatiladi.
`<cstdint>` kutubxonasi, ma'lum bir bayt hajmga ega turli sonlarni aniqlash uchun 
`int8_t`, `int16_t`, `int32_t`, `int64_t` kabi `integer` tipilarni,
shuningdek, undagi odatiy va ularning `unsigned` versiyalarini, masalan, `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t` ni o'z ichiga oladi.
## Kod tavsifi
Bu dasturda `son` `int16_t` o\`zgaruvchisi e\`lon qilinadi va `5` qiymati bilan ishga tushiriladi.
Shundan so'ng, `son` qiymati `10` ga yangilanadi va yangilangan qiymatni konsolda chop etadi.
```console
Son = 5
Son = 10
```
## Ko'rsatmalar
### Ma'nosi:
16-bitli butun son.
### Hajmi:
2 bayt.
### Oraliq:
-32768 dan 32767 gacha.
### Foydalanish:
int16_t a;
