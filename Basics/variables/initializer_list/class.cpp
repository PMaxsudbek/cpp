#include <iostream>
#include <initializer_list>
#include <vector>

class MyClass {
public:
    MyClass(std::initializer_list<int> list) {
        for (auto elem : list) {
            data.push_back(elem);
        }
    }

    void print() const {
        for (auto elem : data) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> data;
};

int main() {
    MyClass obj = {1, 2, 3, 4, 5}; // std::initializer_list yordamida ob'ekt yaratish
    obj.print();

    return 0;
}
