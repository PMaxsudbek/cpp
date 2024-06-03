# C++ da promise oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <future>
using namespace std;
void get_raqam(promise<int>& prom) {
    prom.set_value(77);
}
int main() {
    promise<int> prom;
    future<int> fut = prom.get_future();
    thread t(get_raqam, ref(prom));
    int answer = fut.get();
    cout << "Natija: " << answer << endl;
    t.join();
    return 0;
}
```
Ushbu C++ dasturi `promise` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## promise tipi
C++ standart kitobxonasida mavjud bo'lgan, dasturning boshqa qismlariga (masalan, foydalanuvchiga) biror natija qaytarishga vaqtida obyektni yuboradigan vosita.
U standart mavzudagi "sodda" ma'lumotlarni o'z ichiga oladi va 
ularni parallel ravishda amalga oshiriladigan yoki yopishga muvaffaqiyatli bo'lgan amallar bo'yicha yuborishi mumkin.
## Kod tavsifi
Bu misol  `get_raqam()` funksiyasini parallel ravishda boshlash uchun `promise<int>` obyektini ishlatadi.
Keyin `prom.set_value(77)` orqali natijani yuboradi va `fut.get()` bilan uni qabul qiladi.
```console
Natija: 77
```
## Ko'rsatmalar
### Ma'nosi:
future ni ta'minlash uchun ishlatiladigan qiymat va'dasi.
### Hajmi:
Hisoblanayotgan qiymat turi va yordamchi ma'lumotlarga qarab.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
promise<int> a;
```
