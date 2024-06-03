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
