#include <iostream>
#include <future>
using namespace std;
void get_raqam(promise<int>& prom) {
    prom.set_value(77);
}
int main() {
    promise<int> prom;
    future<int> fut = prom.get_future();
    thread t(get_raqam, ref(prom));
    int answer = fut.get();
    cout << "Natija: " << answer << endl;
    t.join();
    return 0;
}
