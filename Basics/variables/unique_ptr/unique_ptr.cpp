#include <iostream>
#include <memory>
using namespace std;
class Test {
public:
    Test() { cout << "Test obyekti yaratildi" << endl; }
    ~Test() { cout << "Test obyekti yo'q qilindi" << endl; }
    void show() { cout << "Test show() metodi" << endl; }
};
int main() {
    // unique_ptr yaratish
    unique_ptr<Test> p1(new Test());
    p1->show();
    // unique_ptr ni ko'chirish (move)
    unique_ptr<Test> p2 = move(p1);
    if (!p1) {
        cout << "p1 hozirda null ishora qilmoqda" << endl;
    }
    p2->show();
    // unique_ptr ga yangi resurs biriktirish
    p2.reset(new Test()); // Avvalgi resurs avtomatik ravishda ozod qilinadi
    p2->show();
    // unique_ptr ni o'chirish
    p2.reset(); // Resurs ozod qilinadi
    if (!p2) {
        cout << "p2 hozirda null ishora qilmoqda" << endl;
    }
    return 0;
}
