# C++ da condition_variable oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
mutex mtx;
condition_variable cv;
bool ready = false;
void doWork() {
    unique_lock<mutex> lock(mtx);
    // Shart bajarilguncha kutish
    cv.wait(lock, []{ return ready; });
    cout << "Ish bajarildi!" << endl;
}
void signalWork() {
    unique_lock<mutex> lock(mtx);
    ready = true;
    cv.notify_one();
}
int main() {
    thread worker(doWork);
    sleep_for(seconds(1));
    signalWork();
    worker.join();
    return 0;
}
```
Ushbu C++ dasturi `condition_variable` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## condition_variable Tipi
C++ standart kitobxonasida mavjud bo'lgan, mavjud mutexning muhita o'zgarishlarini kuzatuvchi bir vosita. 
Buning maqsadi, bir qator dasturlar orasida kommunikatsiya o'rnatishni ta'minlashdir.
Bir `condition_variable` ob'ektini foydalanishning asosiy uchun ikki qadam kerak:
1) Mutexni bo'g'lang (lock) qilish.
2) Biror muhim sharoit bajarilguncha (masalan, ma'lumotlar qabul qilindi yoki qatnashchilar ishlarini bajarishni yakunlagan) kutish.
## Kod tavsifi
Bu dasturda `mutex` yordamida bloklanayabdi va `1` soniyadan keyin `signalWork()` funksiyasi ishlaydi va `ready = true;` bo'ladi keyin consolega "Ish bajarildi!" matni chiqadi.
```console
"Ish bajarildi!"
```
## Ko'rsatmalar
### Ma'nosi:
Shartli o'zgaruvchi (conditional variable), kutish va uyg'otish operatsiyalari uchun.
### Hajmi:
Sinxronlash mexanizmi uchun zarur xotira.
### Oraliq:
Sinxronlash talablari uchun.
### Foydalanish:
```cpp
condition_variable a;
```
