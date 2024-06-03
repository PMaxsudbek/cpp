# C++ da time_point oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <chrono>
int main() {
    // Boshlang'ich vaqtni olamiz
    auto start = std::chrono::system_clock::now();
    // Maqsadli amallar
    for (int i = 0; i < 1000000; ++i) {
        // Qandaydur ammallar
    }
    // Yakun vaqtni olamiz
    auto end = std::chrono::system_clock::now();
    // Vaqt davomati
    std::chrono::duration<double> elapsed_seconds = end - start;
    // Vaqtni konsolga chiqaramiz
    std::cout << "Amallar uchun sarflangan vaqt: " << elapsed_seconds.count() << " sekund" << std::endl;
    return 0;
}
```
Ushbu C++ dasturi `time_point` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## time_point Tipi
`C++` da vaqtni ifodalash uchun ishlatiladi. 
U, bitta ifodalangan vaqt punktini ifodalaydi. 
Bunda, "epoch" (boshlang'ich vaqt) ni o'z ichiga oladi va uningdan boshqa bitta xuddi vaqt punktiga qancha vaqt o'tganligini ifodalaydi.
time_point obyektlari, amaliyotlarda juda ham foydalaniladigan, amaldagi vaqtni ifodalash uchun ishlatiladigan vosita. Uning yordami bilan, siz amal boshlanishi va yakunlanishi orasidagi vaqt farqini hisoblash, amallar vaqti, dastur ishga tushishi vaqtini aniqlash va boshqalarni amalga oshirishingiz mumkin.

Yuqoridagi misolda, `time_point` obyektlari `system_clock` turi bilan yaratilgan. Bu, standart platforma vaqtini ifodalaydi. 
Lekin, siz boshqa turdagi vaqtni ifodalay olasiz, masalan, `steady_clock` va `high_resolution_clock` turlaridan foydalanishingiz mumkin. Har bir tur o'zining xususiyatlari va maqsadlari bo'lgan vaqt vaqti bilan ishlash uchun mo'ljallangan.
## Kod tavsifi
Bu dasturda `start` `time_point` o`zgaruvchisi e`lon qilinadi va usha vaqtni oladi `now()` funksiyasi yordamida 
keyin `end` `time_point` o`zgaruvchisi e`lon qilinadi va usha vaqtni oladi `now()` funksiyasi yordamida. Va bu ikki o'zgaruvchi ayirmasi qandaydur ishga ketgan vaqt deb qarab ushani chop etamiz.
```console
Amallar uchun sarflangan vaqt: 0 sekund
```
## Nega 0 sekund chiqdi?
Mening kompyuterim `for` sikl amalini juda tez bajarib `0` sekund ko'rsatyabdi buni boshqacha yo'lda vaqtni ko'pyatirsak bo'ladi. 
### Misol:
```cpp
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
int main() {
    // Boshlang'ich vaqtni olamiz
    auto start = system_clock::now();
    // Maqsadli amallar
    for (int i = 0; i < 3; ++i) {
        // Qandaydur ammallar
        sleep_for(seconds(1));
    }
    // Yakun vaqtni olamiz
    auto end = system_clock::now();
    // Vaqt davomati
    duration<double> elapsed_seconds = end - start;
    // Vaqtni konsolga chiqaramiz
    cout << "Amallar uchun sarflangan vaqt: " << elapsed_seconds.count() << " sekund" << endl;

    return 0;
}
```
Bu dasturda oqimni `for` siklda har `bir` iteratsiyada `1` soniyada uxlatayabman, 
ya'ni `uchta` iteratsiya bulgani uchun `3` soniyada `for` ishlaydi bu bilan kod `3` soniyadan ko'p ishlaydi. Va maning natijam:
```console
Amallar uchun sarflangan vaqt: 3.022 sekund
```
chop etildi.
### Bu shunchaki oqimni vaqtincha uxlatish :)
## Ko'rsatmalar
### Ma'nosi:
Vaqt nuqtasi.
### Hajmi:
Vaqt birligi va vaqt nuqtasiga qarab.
### Oraliq:
Har xil vaqt birliklari uchun.
### Foydalanish:
```cpp
time_point<system_clock> a;
```
