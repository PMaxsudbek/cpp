# basic_istream tipi
C++ dasturlash tilida matnli kirishni boshqarish uchun ishlatiladigan standart kutubxona komponentidir. 
Bu istream sinfining char (char - belgilar) turlari uchun maxsus ko'rinishidir. 
Ko'pincha biz `istream` yoki `ifstream` kabi sinflar bilan tanishmiz, chunki ular umumiy holatlarda keng qo'llaniladi.
## basic_istream<char> nima?
basic_istream C++ STL (Standart Template Library) dagi andozali sinfdir. 
Bu sinf matnli oqimdan ma'lumotlarni o'qish uchun ishlatiladi. 
Char turiga xos versiyasi esa `basic_istream<char>` yoki oddiygina istream deb ataladi.
## Nega ishlatiladi?
`basic_istream<char>` yoki istream ma'lumotlarni kiritish oqimini boshqarish uchun ishlatiladi. 
Misol uchun, fayldan, klaviaturadan yoki boshqa oqim manbalaridan ma'lumotlarni o'qish kerak bo'lganda ishlatiladi.
## Misollar
### Oddiy matn kiritish (klaviatura orqali):
```cpp
#include <iostream>
using namespace std;
int main() {
    istream a(cin.rdbuf());
    string input;
    cout << "Matn kiriting: ";
    a >> input;
    cout << "Siz kiritgan matn: " << input << endl;
    return 0;
}
```
Narija:
```console
Matn kiriting: Salom
Siz kiritgan matn: Salom

```
### Fayldan o'qish:
```cpp
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
        cout << line << endl;
    }
    file.close();
    return 0;
}
```
Natija:
```console
Pardayev Maxsudbek G'ulomjon o'g'li

```
Yuqoridagi misollar orqali `basic_istream<char>` ning qanday ishlatilishi va ma'lumotlarni qanday kiritishi tushuniladi. 
Aslida, `basic_istream<char>` asosiy kirish oqimi sinfidir va u `cin`, `ifstream`, va boshqa kirish oqimi sinflari yordamida keng foydalaniladi.
## Ko'rsatmalar
### Ma'nosi:
Kirish oqimi (input stream) - umumiy kirish oqimi tipi.
### Hajmi:
Oqim boshqarish uchun zarur xotira.
### Oraliq:
Har xil turdagi oqimlar uchun.
### Foydalanish:
```cpp
basic_istream<char> a;
```
