#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_multiset<int> raqamlar; // int tipidagi sonlar uchun unordered_multiset yaratish
    // 5 ta sonni unordered_multiset ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(1);
    raqamlar.insert(2);
    cout << "Raqamlar :";// unordered_multiset dagi elementlarni chiqarish
    for (int i : raqamlar) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
