#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, int> ismlar = {
    {"Pardayev",1},{"Maxsudbek",2},{"G'ulomjon o'g'li",3}
    };// std::unordered_map yaratish va boshlang'ich qiymatlarni kiritish
    cout << "So'z va tartibi:" << endl;// std::unordered_map elementlarini chop etish
    for (const auto& pair : ismlar) {
        cout << pair.first << " <-> " << pair.second << "- o'rin" << endl;
    }
}
