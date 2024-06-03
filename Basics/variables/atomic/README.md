# C++ da atomic oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
#include <atomic>
using namespace std;
atomic<int> a;
void addOne() {
    for (int i = 0; i < 10000; ++i) {
        // Atomar qo'shish operatsiyasi
        a.fetch_add(1);
    }
}
void subtractOne() {
    for (int i = 0; i < 10000; ++i) {
        // Atomar ayirish operatsiyasi
        a.fetch_sub(1);
    }
}
int main() {
    // Atomar o'zgaruvchi
    a = 0;
    // Ikkala tasma ishini boshlash
    thread t1(addOne);
    thread t2(subtractOne);
    t1.join();
    t2.join();
    // Natijani konsolga chiqarish
    cout << "Natija: " << a.load() << endl;
    return 0;
}
```
Ushbu C++ dasturi `atomic` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## atomic tipi
 C++ standart kitobxonasida mavjud bo'lgan, o'zgaruvchilarning to'g'riligini ta'minlash uchun ishlatiladigan bir sinfdir. 
 Bunda o'zgaruvchilar atomar (atomik) operatsiyalarni qo'llab-quvvatlaydi, 
 ya'ni boshqa dasturlar bir yoki bir nechta o'zgaruvchilarni bitta amalga oshirilgan operatsiya bilan o'zgartirishga urinishi mumkin. 
 Bu, parallel dasturlashda bo'g'liq dasturlarning xatolarini kamaytirish uchun juda foydali bo'ladi.
## Kod tavsifi
Bu dasturda `a` `atomic` o\`zgaruvchisi e\`lon qilinadi. Keyin `a` ga sikl yordamida `10000` martta `1` qo'shiladi va `1` ayriladi natija 0 bo'ladi shunda.
```console
Natija: 0
```
## Endi atomic siz
```cpp
#include <iostream>
#include <thread>
#include <atomic>
using namespace std;
int a;
void addOne() {
    for (int i = 0; i < 1000000; ++i) {
        a++;
    }
}
void subtractOne() {
    for (int i = 0; i < 1000000; ++i) {
        a--;
    }
}
int main() {
    a = 0;
    // Ikkala tasma ishini boshlash
    thread t1(addOne);
    thread t2(addOne);
    thread t3(addOne);
    thread t4(subtractOne);
    thread t5(subtractOne);
    thread t6(subtractOne);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    // Natijani konsolga chiqarish
    cout << "Natija: " << a << endl;
    return 0;
}
```
## Kod tavsifi
Bu dasturda nega oqimlar sonini va siklni ko'paytirdim kam oqim va 
sikl bo'lgani uchun xatolik siz ishlayabdi ya'ni parallel ishga tushirganda bir vaqtda murojat bo'lmay qolyabdi shuning uchun shunday qildim.
```console
Natija: 689516
```
Va hokaza shu kabi xato ishlaydi. `atomic` shuning uchun kerak :)
## Ko'rsatmalar
### Ma'nosi:
Atomar o'zgaruvchilar, bir vaqtda bir necha oqimlar bilan xavfsiz foydalanish uchun.
### Hajmi:
Atomar o'zgaruvchi hajmi.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
atomic<int> a;
```
