#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> raqamlar = {1, 2, 3, 4, 5};// std::list yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::list elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
