#include <iostream>
#include <tuple>
#include <string>
using namespace std;
int main() {
    // tuple yaratish
    tuple<int, double, string> tuple_(42, 3.14, "Hello, World!");
    // tuple elementlariga kirish
    cout << "int: " << get<0>(tuple_) << endl;
    cout << "double: " << get<1>(tuple_) << endl;
    cout << "string: " << get<2>(tuple_) << endl;
    // tuple ni qayta belgilash
    get<0>(tuple_) = 100;
    get<1>(tuple_) = 2.718;
    get<2>(tuple_) = "Goodbye, World!";
    // tuple elementlariga kirish
    cout << "Yangilash int: " << get<0>(tuple_) << endl;
    cout << "Yangilash double: " << get<1>(tuple_) << endl;
    cout << "Yangilash string: " << get<2>(tuple_) << endl;
    // tuple elementlarini olish
    int i;
    double d;
    string s;
    tie(i, d, s) = tuple_;
    // Olingan elementlarni chop etish
    cout << "i: " << i << endl;
    cout << "d: " << d << endl;
    cout << "s: " << s << endl;
    return 0;
}
