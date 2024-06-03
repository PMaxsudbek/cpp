#include <iostream>
#include <chrono>
int main() {
    // Boshlang'ich vaqtni olamiz
    auto start = std::chrono::system_clock::now();
    // Maqsadli amallar
    for (int i = 0; i < 1000000; ++i) {
        // Qandaydur ammallar
    }
    // Yakun vaqtni olamiz
    auto end = std::chrono::system_clock::now();
    // Vaqt davomati
    std::chrono::duration<double> elapsed_seconds = end - start;
    // Vaqtni konsolga chiqaramiz
    std::cout << "Amallar uchun sarflangan vaqt: " << elapsed_seconds.count() << " sekund" << std::endl;
    return 0;
}
