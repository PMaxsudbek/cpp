#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main() {
    // std::chrono::duration ni ishlatish
    duration<int> a(10); // int turi va 10 boshlang'ich qiymat
    duration<long, milli> b(3000); // long turi va 3000 millisekundlik boshlang'ich qiymat
    cout << a.count() << endl;
    cout << b.count() << endl;
    return 0;
}
