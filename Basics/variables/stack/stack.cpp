#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> raqamlar; // std::stack yaratish
    raqamlar.push(1); // Boshlang'ich qiymatlarini qo'shish
    raqamlar.push(2);
    raqamlar.push(3);
    raqamlar.push(4);
    raqamlar.push(5);
    cout << "Raqamlar: "; // std::stack elementlarini chop etish
    while (!raqamlar.empty()) {
        cout << raqamlar.top() << " "; // Oxirgi elementni chiqarish
        raqamlar.pop(); // Oxiridagi elementni olib tashlash
    }
    cout << endl;
    return 0;
}
