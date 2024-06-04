#include <iostream>
#include <chrono>
#include <thread>
int main() {
    using namespace std::chrono;
    steady_clock::time_point start = steady_clock::now();
    std::this_thread::sleep_for(seconds(1));
    steady_clock::time_point end = steady_clock::now();
    duration<double> del = end - start;
    std::cout << "Farq: " << del.count() << " seconds\n";
    return 0;
}
