#include <iostream>
#include <future>
#include <thread>
using namespace std;
int get_raqam() {
    return 7;
}
int main() {
    // future obyekti
    future<int> result = async(get_raqam);
    int answer = result.get();
    cout << "Natija: " << answer << endl;
    return 0;
}
