#include <iostream>
#include <fstream>
int main() {
    std::fstream file("test.txt", std::ios::in | std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        std::cerr << "Fayl ochilmadi!" << std::endl;
        return 1;
    }
    std::basic_iostream<char> a(file.rdbuf()); // fstream oqimidan foydalanish
    // Faylga yozish
    a << "Hello, file!" << std::endl;
    // Fayl o'qish uchun qayta joylashish
    file.seekg(0, std::ios::beg);
    // Fayldan o'qish
    std::string line;
    while (std::getline(a, line)) {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}
