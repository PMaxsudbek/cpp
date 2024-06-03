#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    // stringstream yaratish
    stringstream ss;
    // Ma'lumotlarni stringga yozish
    int int_value = 123;
    double double_value = 4.56;
    string string_value = "Hello";

    ss << int_value << " " << double_value << " " << string_value;

    // Yaratilgan stringni olish
    string combined_string = ss.str();
    cout << "Combined string: " << combined_string << endl;

    // Stringdan ma'lumotlarni o'qish
    int extracted_int;
    double extracted_double;
    string extracted_string;

    ss >> extracted_int >> extracted_double >> extracted_string;

    cout << "Extracted integer: " << extracted_int << endl;
    cout << "Extracted double: " << extracted_double << endl;
    cout << "Extracted string: " << extracted_string << endl;

    return 0;
}
