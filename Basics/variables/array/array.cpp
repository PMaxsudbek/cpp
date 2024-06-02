#include <iostream>
#include <array>
using namespace std;
int main() {
    array<int, 5> raqamlar = {1, 2, 3, 4, 5};// std::array yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// std::array elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
}
