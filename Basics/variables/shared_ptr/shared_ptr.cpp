#include <iostream>
#include <memory>
using namespace std;
class Test {
public:
    Test() { cout << "Test obyekti yaratildi" << endl; }
    ~Test() { cout << "Test obyekti yo'q qilindi" << endl; }
    void show() { cout << "Test show() metodi" << endl; }
};
int main() {// shared_ptr yaratish
    shared_ptr<Test> p1(new Test());
    {
        shared_ptr<Test> p2 = p1; // p1 bilan p2 bir xil obyektga ishora qiladi
        cout << "p1 count: " << p1.use_count() << endl; // Reference count 2 bo'ladi
        cout << "p2 count: " << p2.use_count() << endl;
        p2->show();
    }// p2 yo'q qilinadi, reference count 1 ga kamayadi
    cout << "p1 count: " << p1.use_count() << endl; // Reference count 1 bo'ladi
    p1->show(); // Hali ham obyekt mavjud va foydalanish mumkin
    return 0; // p1 yo'q qilinadi, obyekt resurslari ozod qilinadi
}
