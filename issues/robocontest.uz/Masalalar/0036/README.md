<h1>Masala #<a href="https://robocontest.uz/tasks/0036">0036</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/sunnat">Sunatullo Hojiyev</a></h2>
<h2>G'alati jadval</h2>
<p>
    Mirzo Ulug'bek <code>N+1</code> ta qator va <code>M + 1</code> ta ustundan iborat jadval chizdi va uni quyidagi qonuniyat asosida nomanfiy sonlar bilan to'ldirib chiqdi:
<ul>
    <li>
        <code>A<sub>0,0</sub> = 0</code>
    </li>
    <li>
        <code>A<sub>i,j</sub> = min{k ∈ Z<sub>+</sub>∣(∀i<sub>0</sub> ∈ Z<sub>+</sub>, i<sub>0</sub> &lt; i → A<sub>i<sub>0</sub>,j</sub> &ne; k) ∧ (∀<sub>j<sub>0</sub></sub> ∈ Z<sub>+</sub>, j<sub>0</sub> &lt; j → A<sub>i,j<sub>0</sub></sub> &ne; k)}</code>
    </li>
</ul>
    Boshqacha qilib aytganda <code>A<sub>i,j</sub></code>  - jadvalda o'z o'rnidan chapda ham, yuqorida ham uchramaydigan eng kichik nomanfiy sondir.
    Masalan <code>N = 1</code> va <code>M = 2</code> bo'lganda quyidagicha jadval hosil bo'ladi:
    <table>
        <tr>
            <td>0</td>
            <td>1</td>
            <td>2</td>
        </tr>
        <tr>
            <td>1</td>
            <td>0</td>
            <td>3</td>
        </tr>
    </table>
    Endi unga <code>∑<sub>i=0</sub>N</code> <code>∑<sub>j=0</sub>M</code> yig'indining qiymatini hisoblashga qiziqib qoldi.<br>
    Sizning vazifangiz ham u hisoblagan yig'indini hisoblashdan iborat.<br>
</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p><code>INPUT.TXT</code> kirish faylining yagona satrida ikkita natural son, <code>N</code> va <code>M(1 ≤ N, M ≤ 10<sup>9</sup>)</code></p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p><code>OUTPUT.TXT</code> chiqish faylida yagona son, <code>&sum;<sub>i=0</sub>N</code> <code>&sum;<sub>j=0</sub>M</code> yig'indining qiymatini chop eting.</p>
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
            <td>1 1</td>
            <td>2</td>
        </tr>
        <tr>
            <td>2</td>
            <td>4 2</td>
            <td>33</td>
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
