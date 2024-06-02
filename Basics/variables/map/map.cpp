#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> jadval = {
    {"Pardayev",1},{"Maxsudbek",2},{"G'ulomjon o'g'li",3}
    };// std::map yaratish va boshlang'ich qiymatlarni kiritish
    cout << "So'z va tartibi:" << endl;// std::map elementlarini chop etish
    for (const auto& pair : ismlar) {
        cout << pair.first << " <-> " << pair.second << "- o'rin" << endl;
    }
}
