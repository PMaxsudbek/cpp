
<h1>Masala #<a href="https://robocontest.uz/tasks/0186">0186</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/sunnat">Sunatullo Hojiyev</a></h2>
<h2>Oraliqlar daraxti</h2>
<p>Azimjon N ta har xil elementdan iborat(qiymatlari takrorlanmaydigan) A massiv uchun 2×N-1 ta elementdan iborat T oraliqlar daraxti orqali minimum qiymatni hisoblash uchun quyidagi tartibda tuzdi:
for i in range(0, N): T[i+N-1] = A[i]
for i in range(N-2, -1, -1): T[i] = min(T[i*2+1], T[i*2+2])
Shundan so’ng o’zining A massivini tashlab yubordi va o’ziga 2×N-1 ta elementdan iborat T massivni saqlab qoldi. Azimjon uyda yo’qligidan foydalanib uning ukasi Azimjonning T massiv elementlarini qiymatlarini tartibini almashtirib qo’ydi, va hattoki ba’zi elementlarining qiymatini o’zgartirib ham qo’ygan bo’lishi mumkin. Bundan xabar topgan Azimjon o’zining T massivini qiymatlari almashgan bo’lsada yuqoridagi qonuniyatiga mos keladigan holda qayta tiklamoqchi bo’ldi. Qayta tiklaganida ham A massivga mos keladigan elementlar unikal(yagona)ligini saqlab qolishi kerak. Sizning vazifangiz Azimjon buni eplay oladimi yoki yo’qligini aniqlashdan iborat.</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylining dastlabki satrida N=2kshaklidagi bitta butun son, N(1 ≤ N ≤ 218) soni kiritiladi. Keyingi satrda 2×N-1 ta son, Azimjonning ukasidan qolgan T(-109≤ Ti≤ 109) massivining elementlari kiritiladi.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Chiqish faylida agar Azimjon o’z massivini qayta tiklay olsa dastlabki satrda YES so’zini, keyingi satrda esa 2×N-1 ta elementdan iborat T massivining qayta tiklangan holatini (Agar yechimlar ko’p bo’ladigan bo’lsa leksikografik eng kichigini) chop eting, agar qayta tiklay olmasa yagona satrda NO so’zini chop eting.</p>
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
3 1 3 1 2 4 1</td>
                <td>YES
1 1 3 1 2 3 4</td>
            </tr>
            <tr>
                <td>2</td>
                <td>2
1 1 1</td>
                <td>NO</td>
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
