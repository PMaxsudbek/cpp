#include <iostream>
using namespace std;
int main() {
    istream a(cin.rdbuf());
    string input;
    cout << "Matn kiriting: ";
    a >> input;
    cout << "Siz kiritgan matn: " << input << endl;
    return 0;
}
