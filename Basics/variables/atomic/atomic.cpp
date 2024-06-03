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
    // Tasmalarni yakunlash
    t1.join();
    t2.join();
    // Natijani konsolga chiqarish
    cout << "Natija: " << a.load() << endl;
    return 0;
}
