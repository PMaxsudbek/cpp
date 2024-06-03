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
    shared_ptr<Test> p1 = make_shared<Test>();
    weak_ptr<Test> p2 = p1; // weak_ptr p1 bilan bir xil resursga ishora qiladi
    // weak_ptr ni tekshirish va lock qilish
    if (shared_ptr<Test> p3 = p2.lock()) {
        p3->show();
        cout << "Resurs hali ham mavjud." << endl;
    } else {
        cout << "Resurs mavjud emas." << endl;
    }
    p1.reset(); // shared_ptr ni ozod qilish, resurs ozod qilinadi
    // weak_ptr ni qayta tekshirish
    if (shared_ptr<Test> p3 = p2.lock()) {
        p3->show();
        cout << "Resurs hali ham mavjud." << endl;
    } else {
        cout << "Resurs mavjud emas." << endl;
    }
    return 0;
}
