#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> raqamlar = {1, 2, 3, 4, 5};// Vector yaratish va boshlang'ich qiymatlarni kiritish
    cout << "Raqamlar: ";// Vectorning elementlarini chop etish
    for (int raqam : raqamlar) {
        cout << raqam << " ";
    }
    cout << endl;
    return 0;
}
