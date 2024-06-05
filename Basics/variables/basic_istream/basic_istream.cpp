#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("test.txt");
    if (!file.is_open()) {
        cerr << "Fayl ochilmadi!" << endl;
        return 1;
    }
    basic_istream<char> a(file.rdbuf());
    string line;
    while (getline(a, line)) {
        cout << line;
    }
    file.close();
    return 0;
}
