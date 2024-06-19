
<h1>Masala #<a href="https://robocontest.uz/tasks/1038">1038</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/joha">Jaxongir Qayumjonov</a></h2>
<h2>Arrayni silliqlash</h2>
<p>Asadbek arraylarni yaxshi ko`radi qachonki ular silliqlangan bo'lsa.
Silliqlangan array bu elementlarining orasida boshqa bir array bo`lmagan to'plamdir. Masalan:  [1, 2, 3] silliqlangan array, chunki elementlar tarkibida boshqa array yo'q. [1, 2, [3, 4]] esa silliqlanmagan array, chunki elementlari tarkibida [3, 4] array mavjud. Kunlarning birida Ibrohim Asadbekga yangi funksiyani o'rgatdi. Bu funksiya arrayning har bir elementini 1 pog'ona yuqoriga ko'tarib beradi, agar element 0 - pog'onada bo'lsa uning pog'onasi o'zgarmaydi.
Masalan:
[1,[2, 3],[3, 4, [1, 2]]] => [1,2, 3,3, 4, [1, 2]]
Ya'ni:
1 => 0 - pog'onada bo'gani uchun uning pog'onasi o'zgarmaydi.
[2, 3] => 2, 3.
[3, 4, [1, 2]] => 3, 4, [1, 2].Asadbek bu funksiyani o'zi qaytadan tuzishga qaror qildi va sizga ham buni taklif qilmoqchi. Unga funksiya tuzishda yordam bering!</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylida sizga bir qatorda k (0 < k < 109) soni va string s (0 < |s| < 105) ko'rinishida arrayning dastlabki holati beriladi. Bu yerda |s| - matnning uzunligi. Matnda ortiqcha probellar bo'lmasligi va array to'g'ri formatda berilganligi kafolatlanadi.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Siz dastlabki arrayni k marta silliqlashdan so'ng hosil bo'lgan yangi arrayni chop etishingiz kerak.</p>
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
                <td>1 
[1,[2,3],[3,4,[1,2]]]</td>
                <td>[1,2,3,3,4,[1,2]]</td>
            </tr>
            <tr>
                <td>2</td>
                <td>200
[a,[b,c,[d,e]]]</td>
                <td>[a,b,c,d,e]</td>
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
