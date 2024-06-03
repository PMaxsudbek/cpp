#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // Input string
    string input = "Hello, World!";
    // istringstream ni yaratish
    istringstream iss(input);
    // Turli ma'lumotlarni oqimdan o'qish
    int integer_value;
    double double_value;
    string string_value;
    iss >> integer_value >> double_value >> string_value;
    // O'qilgan qiymatlarni chop etish
    cout << "Integer value: " << integer_value << endl;
    cout << "Double value: " << double_value << endl;
    cout << "String value: " << string_value << endl;
    return 0;
}
