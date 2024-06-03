#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
mutex mtx;
condition_variable cv;
bool ready = false;
void doWork() {
    unique_lock<mutex> lock(mtx);
    // Shart bajarilguncha kutish
    cv.wait(lock, []{ return ready; });
    cout << "Ish bajarildi!" << endl;
}
void signalWork() {
    unique_lock<mutex> lock(mtx);
    ready = true;
    cv.notify_one();
}
int main() {
    thread worker(doWork);
    sleep_for(seconds(1));
    signalWork();
    worker.join();
    return 0;
}
