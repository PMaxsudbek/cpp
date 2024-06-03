# C++ da future oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <future>
#include <thread>
using namespace std;
int get_raqam() {
    return 7;
}
int main() {
    // future obyekti
    future<int> result = async(get_raqam);
    int answer = result.get();
    cout << "Natija: " << answer << endl;
    return 0;
}
```
Ushbu C++ dasturi `future` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## future tipi
C++ standart kitobxonasida mavjud bo'lgan, bir dasturni belgilangan vazifani bajarish uchun int qiymatini qaytaradigan "kelgusi" (`future`) ma'lumotni o'z ichiga oladi. Bu, dasturda parallel ravishda vazifalarni bajarish imkonini beradi. Kelgusi ma'lumotlar, dasturning boshqa qismlari uchun amalga oshirish uchun boshqa dasturlarni kutishga imkon beradi.

`future<int>` obyekti, dasturda bir vazifani parallel ravishda amalga oshirishni boshlayadi va natijani o'z ichiga oladi. Boshqa dasturlar natijani istalgan vaqtda olish uchun bu kelgusi ma'lumotlarni foydalanishadi. Bundan tashqari, `future` obyekti, dasturni to'xtatmasdan oldingi vazifalar tugaganingizda natijani olishga imkon beradi.
## Kod tavsifi
Bu dasturda `result` `future` o\`zgaruvchisi e\`lon qilinadi.
```console
Natija: 7
```
## Ko'rsatmalar
### Ma'nosi:
Kelajakda hisoblanadigan qiymat (standart kutubxona konteyneri).
### Hajmi:
Hisoblanayotgan qiymat turi va yordamchi ma'lumotlarga qarab.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
future<int> a;
```
