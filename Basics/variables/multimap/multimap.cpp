#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<int, string> raqamlar; // int kalit va string qiymat uchun multimap yaratish
    // multimap ga kalit-qiymat juftlarini kiritish
    raqamlar.insert(pair<int, string>(1, "Bir"));
    raqamlar.insert(pair<int, string>(2, "Ikki"));
    raqamlar.insert(pair<int, string>(1, "One"));
    raqamlar.insert(pair<int, string>(3, "Uch"));
    raqamlar.insert(pair<int, string>(2, "Two"));
    // multimap dagi elementlarni chiqarish
    for (const auto &i : raqamlar) {
        cout << "Kalit: " << i.first << ", Qiymat: " << i.second << endl;
    }
    cout << endl;
    return 0;
}
