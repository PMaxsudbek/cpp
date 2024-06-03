#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> raqamlar; // int tipidagi sonlar uchun multiset yaratish
    // 5 ta sonni multiset ga kiritish
    raqamlar.insert(1);
    raqamlar.insert(3);
    raqamlar.insert(2);
    raqamlar.insert(1);
    raqamlar.insert(2);
    cout << "Raqamlar : ";// multiset dagi elementlarni chiqarish
    for (int i : raqamlar) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
