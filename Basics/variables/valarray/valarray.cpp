#include <iostream>
#include <valarray>
using namespace std;
int main() {
    valarray<int> a = {1, 2, 3, 4, 5};
    cout << "Valarray: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;
    a += 2;
    cout << "Ikkini qo'shgandan so'ng: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;
    a *= 3;
    cout << "Uchni ko'paytirgandan so'ng: ";
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
