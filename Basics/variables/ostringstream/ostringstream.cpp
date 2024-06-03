#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // std::ostringstream ni yaratish
    ostringstream oss;
    // Turli qiymatlarni oqimga yozish
    int yil = 2024;
    string oy = "Iyun";
    int kun = 3;
    oss << "Bugun sana: " << kun << " " << oy << " " << yil;
    // Yig'ilgan satrni olish
    string natija = oss.str();
    // Natijani chop etish
    cout << natija << endl;
    return 0;
}
