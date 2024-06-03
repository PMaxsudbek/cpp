#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> raqamlar; // int tipidagi sonlar uchun unordered_set yaratish
    // 5 ta sonni unordered_set ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(5);
    raqamlar.insert(4);
    for (int i : raqamlar) {// unordered_set dagi elementlarni chiqarish
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
