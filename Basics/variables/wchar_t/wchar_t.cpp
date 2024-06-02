#include <iostream>
#include <cwchar>  // Wide character functions
using namespace std;
int main() {
    wchar_t wideStr[] = L"Hello\n\tWorld!";// Keng simvollarni o'z ichiga olgan massiv
    wcout << wideStr << endl;// Keng simvollarni konsolga chiqarish
    return 0;
}
