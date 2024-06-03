#include <iostream>
#include <thread>
#include <future>
#include <chrono>
using namespace std;
int calculate_square(int x) {
    this_thread::sleep_for(chrono::seconds(2));
    return x * x;
}
int main() {
    packaged_task<int(int)> task(calculate_square);
    future<int> result = task.get_future();
    thread t(move(task), 5);
    cout << "Natija tayyor bo'lguncha boshqa ishlar bilan band..." << endl;
    int value = result.get(); // Bu bloklaydi va natijani kutadi
    cout << "Natija: " << value << endl;
    t.join();
    return 0;
}
