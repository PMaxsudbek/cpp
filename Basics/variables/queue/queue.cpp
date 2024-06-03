#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q; // int tipidagi sonlar uchun navbat yaratish
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.empty()) {// Navbatdagi elementlarni chiqarish
        cout << q.front() << " "; // Navbatdagi birinchi elementni chop etish
        q.pop(); // Navbatdan birinchi elementni o'chirish
    }
    cout << endl;
    return 0;
}
