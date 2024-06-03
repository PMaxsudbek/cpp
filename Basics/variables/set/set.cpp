#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> raqamlar; // int tipidagi sonlar uchun set yaratish
    // 5 ta sonni set ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(5);
    raqamlar.insert(4);
    for (int i : raqamlar) {// set dagi elementlarni chiqarish
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
