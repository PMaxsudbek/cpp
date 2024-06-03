# C++ da packaged_task oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <thread>
#include <future>
#include <chrono>
using namespace std;
int calculate_square(int x) {
    this_thread::sleep_for(chrono::seconds(2));
    return x * x;
}
int main() {
    packaged_task<int(int)> task(calculate_square);
    future<int> result = task.get_future();
    thread t(move(task), 5);
    cout << "Natija tayyor bo'lguncha boshqa ishlar bilan band..." << endl;
    int value = result.get(); // Bu bloklaydi va natijani kutadi
    cout << "Natija: " << value << endl;
    t.join();
    return 0;
}
```
Ushbu C++ dasturi `packaged_task` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## packaged_task tipi
C++ standarti bilan taqdim etilgan asinxron hisob-kitoblarni boshqarish uchun ishlatiladigan bir vositadir. 
U biror bir funktsiya yoki hisob-kitob natijasini birlashtiradi va uni kelajakda (`future`) olish imkonini beradi. 
Bu, asosan, `future` va `promise` bilan birgalikda ishlatiladi va parallel hisob-kitoblarni amalga oshirishda foydali bo'lishi mumkin.
## Kod tavsifi
```console
Natija tayyor bo'lguncha boshqa ishlar bilan band...
Natija: 25
```
## Ko'rsatmalar
### Ma'nosi:
future bilan bog'liq vazifa.
### Hajmi:
Vazifa va yordamchi ma'lumotlarga qarab.
### Oraliq:
Har xil turlar uchun.
### Foydalanish:
```cpp
packaged_task<int()> a;
```
