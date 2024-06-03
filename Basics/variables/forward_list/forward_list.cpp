#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    forward_list<int> raqamlar = {1, 2, 3, 4, 5};// std::forward_list yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::forward_list elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
