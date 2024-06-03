#include <iostream>
#include <thread>
using namespace std;
void hello() {
    cout << "Salom, dunyo!" << endl;
}
int main() {
     // std::jthread obyektini yaratish va boshlash
    jthread t(print_message);
    // Bu yerda join() yoki detach() chaqirilishi shart emas, std::jthread avtomatik tarzda boshqaradi
    return 0; // std::jthread hayot tsikli tugaganda avtomatik ravishda join() chaqiriladi
}
