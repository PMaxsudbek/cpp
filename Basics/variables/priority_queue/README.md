# C++ da priority_queue oʻzgaruvchisiga misol
```cpp
#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq; // int tipidagi sonlar uchun priority_queue yaratish
    pq.push(1);// 5 ta sonni priority_queue ga kiritish
    pq.push(3);
    pq.push(2);
    pq.push(5);
    pq.push(4);
    while (!pq.empty()) {// priority_queue dagi elementlarni chiqarish
        cout << pq.top() << " "; // priority_queue dagi eng yuqori ustunlikka ega elementni chop etish
        pq.pop(); // priority_queue dan eng yuqori ustunlikka ega elementni o'chirish
    }
    cout << endl;
    return 0;
}
```
Ushbu C++ dasturi `priority_queue` o'zgaruvchisidan foydalanishni ko'rsatilgan.
## priority_queue Tipi
C++ standart kutubxonasida mavjud bo'lgan bir konteyner adapteri. `priority_queue` ma'lumot tuzilmasi maxsus turdagi navbat bo'lib, u elementlarni ma'lum bir tartibda saqlaydi. 
Aniqrog'i, `priority_queue` har doim eng yuqori ustunlikka ega elementni oldinga chiqaradi. 
Bu, masalan, eng katta yoki eng kichik elementni birinchi chiqarish imkonini beradi.
## Kod tavsifi
Bu dasturda `pq` nomli `queue<int>` o'zgaruvchisi e'lon qilinadi va boshlang'ich qiymat sifatida `1`, `3`, `2`, `5` va `4` foydalaniladi va chop etiladi.
```console
5 4 3 2 1
```
## Ko'rsatmalar
### Ma'nosi:
Ustuvorlik qatori (priority queue, standart kutubxona konteyneri).
### Hajmi:
Elementlar soniga qarab o'zgaradi.
### Oraliq:
Har xil elementlar turi uchun.
### Foydalanish:
```cpp
priority_queue<int> a;
```
