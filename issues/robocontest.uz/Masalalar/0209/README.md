
<h1>Masala #<a href="https://robocontest.uz/tasks/0209">0209</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/sunnat">Sunatullo Hojiyev</a></h2>
<h2>Labirint</h2>
<p>Sizga UTF-16 belgilaridan hosil qilingan labirint beriladi. Siz labirintning\(A\)nuqtasidan\(B\)nuqtasiga olib boradigan yo’lni chizishingiz kerak bo’ladi. Labiring o’z ichiga\(N×M\)yacheykani qamrab oladi va misollarda ko’rsatilgandek ifodalanadi. Har bir yacheykani ifodalash uchun balandligiga 1 ta belgi, eniga 3 ta belgidan foydalanilgan. Labirintda siz quyidagi belgilardan foydalanishingiz mumkin:
№
belgi
UTF-16
1
SPACE
0x0020
2
─
0x2500
3
│
0x2502
4
┌
0x250C
5
┐
0x2510
6
└
0x2514
7
┘
0x2518
8
├
0x251C
9
┤
0x2524
10
┬
0x252C
11
┴
0x2534
12
┼
0x253C
13
╴
0x2574
14
╵
0x2575
15
╶
0x2576
16
╷
0x2577

Siz labirintda\(A\)nuqtadan\(B\)nuqtaga borish yo’lini misollarda ko’rsatilgandek ifodalang.\(A\)nuqtadan chiqish va\(B\)nuqtaga yetib borishda siz faqatgina №13, №14, №15, №16 dagi belgilardan foydalanishingiz mumkin.</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylining dastlabki satrida ikkita butun son,\(N(0 < N < 50)\)va\(M(0 < M < 100)\)mos ravishda labirintning qatorlar soni va ustunlar soni kiritiladi. Keyingi\(2×N+1\)qatorda\(4×M+1\)tadan UTF-16 belgilari berilib labirint tasvirlanadi. Labirintning chekka qismi har doim yopiq hisoblanadi.\(A\)va\(B\)belgilar labirintning\(N×M\)yacheykalarining ixtiyoriy birida yacheyka markazida joylashganligi kafolotlanadi.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Chiqish faylida labirintda\(A\)nuqtadan\(B\)nuqtaga boradigan yo’lni misollarda ko’rsatilgan shaklda tasvirlang.</p>
<h2>Misollar</h2>
<table>
    <thead>
        <tr>
            <th>#</th>
            <th>input.txt</th>
            <th>output.txt</th>
        </tr>
    </thead>
    <tbody>
            <tr>
                <td>1</td>
                <td>8 8
┌───┬───────────────────┬───────┐
│ A │                   │       │
│   ╵   ┌───────────┐   ├───╴   │
│       │           │   │       │
├───────┴───────╴   │   ╵   ╷   │
│                   │       │   │
│   ╷   ┌───────┐   ├───────┤   │
│   │   │     B │   │       │   │
├───┘   │   ╶───┤   │   ╷   │   │
│       │       │   │   │   │   │
│   ╶───┴───┐   ╵   └───┘   │   │
│           │               │   │
│   ╶───┐   ├───────────────┘   │
│       │   │                   │
├───╴   │   ╵   ╶───────────────┤
│       │                       │
└───────┴───────────────────────┘</td>
                <td>┌───┬───────────────────┬───────┐
│ A │ ┌───────────────┐ │       │
│ ╷ ╵ │ ┌───────────┐ │ ├───╴   │
│ └───┘ │           │ │ │ ┌───┐ │
├───────┴───────╴   │ │ ╵ │ ╷ │ │
│     ┌───────────┐ │ └───┘ │ │ │
│   ╷ │ ┌───────┐ │ ├───────┤ │ │
│   │ │ │ ┌─╴ B │ │ │       │ │ │
├───┘ │ │ │ ╶───┤ │ │   ╷   │ │ │
│ ┌───┘ │ └───┐ │ │ │   │   │ │ │
│ │ ╶───┴───┐ │ ╵ │ └───┘   │ │ │
│ └───────┐ │ └───┘         │ │ │
│   ╶───┐ │ ├───────────────┘ │ │
│       │ │ │ ┌───────────────┘ │
├───╴   │ │ ╵ │ ╶───────────────┤
│       │ └───┘                 │
└───────┴───────────────────────┘</td>
            </tr>
            <tr>
                <td>2</td>
                <td>8 8
┌───┬───────────────────┬───────┐
│ A │                   │       │
│   ╵   ┌───────────┐   ├───╴   │
│       │           │   │       │
├───────┴───────╴   │   ╵   ╷   │
│                   │       │   │
│   ╷   ┌───────┐   ├───────┤   │
│   │   │       │   │       │   │
├───┘   │   ╶───┤   │   ╷   │   │
│       │       │   │   │   │   │
│   ╶───┴───┐   ╵   └───┘   │   │
│           │               │   │
│   ╶───┐   ├───────────────┘   │
│       │   │                   │
├───╴   │   ╵   ╶───────────────┤
│       │                     B │
└───────┴───────────────────────┘</td>
                <td>┌───┬───────────────────┬───────┐
│ A │ ┌───────────────┐ │       │
│ ╷ ╵ │ ┌───────────┐ │ ├───╴   │
│ └───┘ │           │ │ │ ┌───┐ │
├───────┴───────╴   │ │ ╵ │ ╷ │ │
│                   │ └───┘ │ │ │
│   ╷   ┌───────┐   ├───────┤ │ │
│   │   │       │   │       │ │ │
├───┘   │   ╶───┤   │   ╷   │ │ │
│       │       │   │   │   │ │ │
│   ╶───┴───┐   ╵   └───┘   │ │ │
│           │               │ │ │
│   ╶───┐   ├───────────────┘ │ │
│       │   │ ┌───────────────┘ │
├───╴   │   ╵ │ ╶───────────────┤
│       │     └─────────────╴ B │
└───────┴───────────────────────┘</td>
            </tr>
            <tr>
                <td>3</td>
                <td>4 3
┌───────┬───┐
│ B     │   │
├───╴   │   │
│       │   │
│   ┌───┘   │
│   │ A     │
│   └───╴   │
│           │
└───────────┘</td>
                <td>┌───────┬───┐
│ B ╶─┐ │   │
├───╴ │ │   │
│ ┌───┘ │   │
│ │ ┌───┘   │
│ │ │ A ╶─┐ │
│ │ └───╴ │ │
│ └───────┘ │
└───────────┘</td>
            </tr>
            <tr>
                <td>4</td>
                <td>13 8
┌───┬───────┬───────────┬───────┐
│   │       │           │       │
│   ╵   ╷   │   ┌───╴   │   ╷   │
│       │   │   │       │   │   │
├───────┤   ╵   │   ╶───┤   │   │
│       │       │       │   │   │
│   ╷   └───────┴───┐   ╵   │   │
│   │     A         │       │   │
│   ├───────┬───┐   └───────┤   │
│   │       │   │           │   │
│   ╵   ╷   ╵   │   ╶───────┤   │
│       │       │           │   │
├───────┴───┐   ├───────┐   ╵   │
│           │   │       │       │
│   ╶───┐   │   └───╴   ├───────┤
│       │   │           │       │
│   ╷   │   ├───────┐   ╵   ╷   │
│   │   │   │ B     │       │   │
│   │   │   ╵   ┌───┴───────┤   │
│   │   │       │           │   │
├───┘   ├───────┘   ╷   ╶───┘   │
│       │           │           │
│   ╶───┤   ┌───────┴───────┬───┤
│       │   │               │   │
│   ╷   ╵   └───────╴   ╷   ╵   │
│   │                   │       │
└───┴───────────────────┴───────┘</td>
                <td>┌───┬───────┬───────────┬───────┐
│   │       │           │       │
│   ╵   ╷   │   ┌───╴   │   ╷   │
│       │   │   │       │   │   │
├───────┤   ╵   │   ╶───┤   │   │
│ ┌───┐ │       │       │   │   │
│ │ ╷ │ └───────┴───┐   ╵   │   │
│ │ │ └─╴ A         │       │   │
│ │ ├───────┬───┐   └───────┤   │
│ │ │ ┌───┐ │   │           │   │
│ │ ╵ │ ╷ │ ╵   │   ╶───────┤   │
│ └───┘ │ └───┐ │           │   │
├───────┴───┐ │ ├───────┐   ╵   │
│ ┌───────┐ │ │ │       │       │
│ │ ╶───┐ │ │ │ └───╴   ├───────┤
│ └───┐ │ │ │ └───────┐ │ ┌───┐ │
│   ╷ │ │ │ ├───────┐ │ ╵ │ ╷ │ │
│   │ │ │ │ │ B     │ └───┘ │ │ │
│   │ │ │ │ ╵ ╷ ┌───┴───────┤ │ │
│   │ │ │ └───┘ │ ┌───┐     │ │ │
├───┘ │ ├───────┘ │ ╷ │ ╶───┘ │ │
│ ┌───┘ │ ┌───────┘ │ └───────┘ │
│ │ ╶───┤ │ ┌───────┴───────┬───┤
│ └───┐ │ │ │               │   │
│   ╷ │ ╵ │ └───────╴   ╷   ╵   │
│   │ └───┘             │       │
└───┴───────────────────┴───────┘</td>
            </tr>
    </tbody>
    </table>
    
<h2>Javob:</h2>

######
```cpp
#include <iostream>
using namespace std;
int main()
{
    // Masala hali yechilmagan
    return 0;
}
```
