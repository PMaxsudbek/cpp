#include <iostream>
using namespace std;
// Taomlar turi uchun enum
enum Taomlar {
    Osh,
    Manti,
    Somsa
};
int main() {
    Taomlar taom = Manti;// Enum qiymatlariga murojaat qilish
    cout<< taom << endl;// Enum qiymatini chop etish
    return 0;
}
