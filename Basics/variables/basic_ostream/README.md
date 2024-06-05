# basic_ostream tipi
C++ dasturlash tilida matnli chiqishni boshqarish uchun ishlatiladigan standart kutubxona komponentidir. 
Bu ostream sinfining char (char - belgilar) turlari uchun maxsus ko'rinishidir. 
Odatda, biz `ostream`, `ofstream` kabi sinflar bilan ishlaymiz, chunki ular umumiy holatlarda keng qo'llaniladi.
## basic_ostream<char> nima?
basic_ostream C++ STL (Standart Template Library) dagi andozali sinfdir. 
Bu sinf matnli oqimga ma'lumotlarni yozish uchun ishlatiladi. 
Char turiga xos versiyasi esa `basic_ostream<char>` yoki oddiygina ostream deb ataladi.
## Nega ishlatiladi?
`basic_ostream<char>` yoki ostream ma'lumotlarni chiqarish oqimini boshqarish uchun ishlatiladi. 
Misol uchun, faylga, ekranga yoki boshqa oqim manbalariga ma'lumotlarni yozish kerak bo'lganda ishlatiladi.
## Misollar
### Oddiy matn chiqarish (ekranga yoki konsolga):
```cpp
#include <iostream>
using namespace std;
int main() {
    ostream a(cout.rdbuf());
    a << "Hello, World!" << endl;
    return 0;
}
```
Narija:
```console
Hello, World!

```
### Faylga yozish:
```cpp
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("test.txt");
    if (!file.is_open()) {
        cerr << "Fayl ochilmadi!" << endl;
        return 1;
    }
    basic_ostream<char> a(file.rdbuf());
    a << "Hello, file!" << endl;
    file.close();
    return 0;
}

```
Natija:
```console

```
test.txt ning kod ishlatilmasdan avvalgi natijasi:
```console
Pardayev Maxsudbek G'ulomjon o'g'li
```
test.txt ning kod ishlatilgandan keyingi natijasi:
```console
"Hello, file!"
```
Yuqoridagi misollar orqali `basic_ostream<char>` ning qanday ishlatilishi va ma'lumotlarni qanday chiqarishi tushuniladi. 
Aslida, `basic_ostream<char>` asosiy chiqish oqimi sinfidir va u `cout`, `ofstream`, va boshqa chiqish oqimi sinflari yordamida keng foydalaniladi.
## Ko'rsatmalar
### Ma'nosi:
Chiqish oqimi (output stream) - umumiy chiqish oqimi tipi.
### Hajmi:
Oqim boshqarish uchun zarur xotira.
### Oraliq:
Har xil turdagi oqimlar uchun.
### Foydalanish:
```cpp
basic_ostream<char> a;
```
