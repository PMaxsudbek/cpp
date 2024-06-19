
<h1>Masala #<a href="https://robocontest.uz/tasks/1158">1158</a> #<a href="https://robocontest.uz/tasks?category=7">Matematika</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/rshohruh">Shohruh Rahmatillayev</a></h2>
<h2>Hamma g'olib</h2>
<p>Mashhur Robocontest tizimida\(n\)reyting o'ynaladi.  Reytingni taqsimlash quyidagi algoritm bo'yicha amalga oshiriladi: agar tadbirda k ishtirokchi ishtirok etsa, u holda n reyting ular orasida teng taqsimlanadi va faqatgina sonning butun qismi olinadi.  Tarqatish oxirida foydalanilmagan reyting qolishi mumkin - u ishtirokchilarning hech biriga hisoblanmaydi.
Masalan\(n=7\)va\(k=3\)holatnin ko'rib chiqaylik. Bunda har bir ishtirokchiga\(\lfloor7/3 \rfloor = 2\)reyting qo'shiladi. Qolgan 1 reyting hech kimga tegishli bo'lmaydi. Agar k=9 bo'ladigan bo'lsa, hech kim reyting olmaydi.
Shohruh ushbu reyting o'yinida ishtirok etadi, ammo ushbu contestda qatnashganlarning umumiy soni haqida ma'lumot yo'q.  Shuning uchun, u ushbu o'yin natijasida qanday turli xil reyting qiymatlari oshishi mumkinligini bilmoqchi va sizdan yordam so'ramoqda.
Masalan, agar\(n=5\)bo'lsa, biz kutgan javob\(0,1,2,5\)ketma-ketligiga teng bo'ladi.  Ketma-ketlikdagi qiymatlarning har biri  ba'zi mos musbat butun k uchun\(⌊n/k⌋\)​​sifatida olinishi mumkin (bu erda\(⌊x⌋\)- x dan kichik yoki teng bo'lgan eng katta butun son):\(⌊5/ 7⌋=0,\ ⌊5/5 ⌋ = 1,\ ⌊5/2⌋ = 2, \ ⌊5/1⌋ = 5\).
Berilgan n boʻyicha barcha mumkin boʻlgan reyting oʻsishlar ketma-ketligini topadigan dastur yozing.
</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylining birinchi qatorida butun t\((1≤t≤10)\)- testlar soni mavjud.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Chiqish faylida har bir test uchun birinchi qatorda turli xil reyting o'zgarishlar sonini, keyingi qatorda esa shu sonlarni kamaymaydigan tartibda bo'sh joy bilan ajratilgan holatda chop eting.</p>
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
                <td>4
13
11
5
17</td>
                <td>7
0 1 2 3 4 6 13 
6
0 1 2 3 5 11 
4
0 1 2 5 
8
0 1 2 3 4 5 8 17</td>
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
