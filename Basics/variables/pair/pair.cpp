#include <iostream>
#include <utility>
using namespace std;
int main() {
    // pair yaratish
    pair<int, string> jadvalcha(1, "Hello");
    // pair elementlariga kirish
    cout << "First: " << jadvalcha.first << endl;
    cout << "Second: " << jadvalcha.second << endl;
    return 0;
}
