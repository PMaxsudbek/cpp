#include <iostream>
#include <thread>
using namespace std;
void hello() {
    cout << "Salom, dunyo!" << endl;
}
int main() {
    // std::thread obyektini yaratish va boshlash
    thread t(hello);
    t.join();
    return 0;
}
