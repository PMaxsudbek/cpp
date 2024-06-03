#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
// Global mutex obyekti
mutex mp;
void printNumbers() {
    // Mutex ni bo'g'lang
    lock_guard<mutex> lock(mp);
    // Ishlatish mumkin bo'lgan kod qismi
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    // Birinchi tasma ochish
    thread t1(printNumbers);
    // Ikkinchi tasma ochish
    thread t2(printNumbers);
    // Tasmalar tugaguncha kuting
    t1.join();
    t2.join();
    return 0;
}
