#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;
int main() {
    initializer_list<int> r = {1, 2, 3, 4, 5};
    cout << "Initializer_list: ";
    for (auto elem : r) {
        cout << elem << " ";
    }
    cout << endl;
    vector<int> v(r);
    cout << "Vector: ";
    for (auto elem : v) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
