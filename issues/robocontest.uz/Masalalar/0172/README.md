
<h1>Masala #<a href="https://robocontest.uz/tasks/0172">0172</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/sirojiddin">Sirojiddin</a></h2>
<h2>Golomb ketma-ketligi</h2>
<p>Golomb ketma-ketligi\(G_1, G_2, \space \dots \space, G_n\)–\(i\)- elementi i soni ketma-ketlikda necha marta uchragani soniga teng bo’lgan o'suvchi ketma-ketlikdir. Ketma-ketlikning bir nechta dastlabki qiymatlari:\([1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, \space \dots]\).
Misol uchun,\(G_1 = 1\), sababi 1 soni ketma-ketlikda bir marta uchragan. Xuddi shu kabi\(G_4 = 3\), chunki 4 soni ketma-ketlikda 3 marta uchragan.
Golomb ketma-ketligini quyidagi formula orqali topish mumkin:
\(G_1 = 1\)\(G_{i+1} = 1 +G_{i+1-G_{G_i}} \space\space i \ge1\)
Sizning vazifangiz Golomb ketma-ketligini dastlabki\(n\)ta hadi yig’indisini\((G_1 + G_2 + \dots + G_n)\)topishdan iborat.</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Bitta butun\(n\)soni\(( 1 \le n \le 10^9)\).</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Bitta butun son – masalaning javobi.</p>
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
                <td>5</td>
                <td>11</td>
            </tr>
            <tr>
                <td>2</td>
                <td>12</td>
                <td>44</td>
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
