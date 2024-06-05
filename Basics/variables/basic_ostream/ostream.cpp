#include <iostream>
using namespace std;
int main() {
    ostream a(cout.rdbuf());
    a << "Hello, World!" << endl;
    return 0;
}
