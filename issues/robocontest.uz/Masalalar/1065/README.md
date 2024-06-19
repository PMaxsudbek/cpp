
<h1>Masala #<a href="https://robocontest.uz/tasks/1065">1065</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/asadbek">Qarshiyev Asadbek</a></h2>
<h2>Tizimda jarima hisoblash #3</h2>
<p>RoboContest.uzda yangi bo'lgan ko`pchilik ba'zida jarima tizimi qanday ishlashini tushunishmaydi. Bunda jarima quyidagicha baholanadi: Har bir xato yuborilgan urinish uchun 5 daqiqa jarima hisoblanadi va to'g'ri javobni yuborgan vaqtini daqiqa sifatida yaxlitlab qo'shiladi. Aytaylik foydalanuvchi to'g'ri javob yuborishdan oldin 5 ta xato urinishga yo'l qo'ydi. To'g'ri javobni esa 21-daqiqada yubordi.Unutmang 21 daqiqa deganda misol uchun″20:SS″nazarda tutuiladi. Unda bu masala uchun jarima:
20+5⋅5=4520+5⋅5=45
Kabi hisoblanadi.
CE - kompilatsiya jarayonida xatolik bunda jarima hisoblanmaydi.
PE#N - N-testda javobni chop etishda xatolik
TLE#N - N-testda masalada belgilangan vaqt cheklovidan o'tib ketdi
WA#N - N-testda masalaga noto'g'ri javob berildi.
RE#N - N-testda bajarish xatosi. Dastur nolga teng bo'lmagan qaytarish kodi bilan yakunlandi. Bunday holda, ishning natijasi tekshirilmaydi.
MLE#N - N-testda dastur masalada belgilangan xotira cheklovidan oshib ketdi. Dastur o'rnatilgan xotira hajmidan ko'proq foydalanadi.
ACC - Barcha testlardan muvoffaqiyatli o'tdi.
Bunda N 200 dan oshmaydigan natural son.
Urinishlar soni esa 100 dan oshmaydi.
Unutmang bir masala uchun sizning yechimingiz qabul qilinsa undan keyingi urinishlar uchun jarima hisoblanmaydi.
Agar birorta to'g'ri urinish bo'lmasa masalaga jarima hisoblanmaydi.
Yuborishlar vaqti o`sish tartibida ekanligi kafolatlanadi.
Ammo yaqin kelajakda quyidagicha o'zgartirish kiritishmoqchi. Yuborilgan kod kompilatsiya jarayonida xatolikka uchrasa yoki misol uchun berilgan testlardan(sample testlardan) o'ta olmasa jarima hisoblanmaydi.
Foydalanuvchining qaysidir bir contestdagi ishtiroki haqida ma'lumotlar mavjud. Siz uning o'sha contestda nechta masala ishlaganligi va jarimasini hisoblab berishingiz kerak bo'ladi.</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylida har bir masala uchun 1-qatorda berilgan(sample) testlar soni, keyingi qatorda uning urinishlari haqida ma'lumot. 3-qatorda esa har bir urinish vaqti beriladi. Jami masalalar soni 10 tadan ko'p emas.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Chiqish faylida birinchi qatorda foydalanuvchi ishlagan masalalar soni keyingi qatorda uning jarimalar miqdori.</p>
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
WA#1 MLE#5 ACC WA#5 ACC ACC TLE#2 TLE#10 ACC PE#4 TLE#1 WA#9 CE ACC WA#1 RE#8
5 8 10 13 18 23 33 35 37 43 48 52 52 56 66 70</td>
                <td>1
14</td>
            </tr>
            <tr>
                <td>2</td>
                <td>4
MLE#6 WA#9 WA#10 PE#5 PE#8 TLE#2 PE#1 RE#7 RE#3 ACC
1 3 9 9 17 23 23 23 29 33
3
MLE#7 RE#6 TLE#10 ACC WA#7 ACC TLE#8
5 13 21 30 40 48 48
2
MLE#1 CE PE#1 CE WA#4 CE PE#1 WA#3 PE#2 ACC TLE#1 ACC TLE#1 CE ACC TLE#8 RE#3 ACC
9 16 25 34 34 35 36 44 52 55 60 66 70 79 89 95 105 113</td>
                <td>3
170</td>
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
