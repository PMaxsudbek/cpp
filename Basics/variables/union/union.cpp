#include <iostream>
using namespace std;
// Union turi uchun
union Data { int i; float f; char c; };
int main() {
    Data malumot;
    malumot.i = 10;// Qiymat bermoq
    // Union ichidagi i qiymatni chop etish
    cout << "Butun qiymati: " << malumot.i << endl;
    // Union ichidagi f qiymatni chop etish
    malumot.f = 3.14;// Qiymat bermoq
    cout << "Haqiqiy qiymati: " << malumot.f << endl;
    // Union ichidagi c qiymatni chop etish
    malumot.c = 'A';// Qiymat bermoq
    cout << "Belgi qiymati: " << malumot.c << endl;
    return 0;
}
