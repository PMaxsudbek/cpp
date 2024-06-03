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
