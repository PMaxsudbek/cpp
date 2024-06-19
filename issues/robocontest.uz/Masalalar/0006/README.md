<h1>Masala #<a href="https://robocontest.uz/tasks/0006">0006</a> #<a href="https://robocontest.uz/tasks?category=1">Oson</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/sunnat">Sunatullo Hojiyev</a></h2>
<h2>Dasturchilar kuni</h2>
<p>
  Dasturchilar kuni yilning <code>255</code>-kunida nishonlanadi(bunda <code>1</code> - yanvar nolinchi kun deb hisoblanadi). Berilgan yildagi dasturchilar kuni sanasini aniqlaydigan dastur yozishingiz kerak.
  <br>  
Grigorian taqvimida kabisa yili hisoblanadi:
  <ul>
    <li>
      yil raqami <code>400</code> ga bo'linadigan yil
    </li>
    <li>
      yil raqami <code>4</code> ga bo'linadigan, ammo, <code>100</code> ga bo'linmaydigan yil
    </li>
  </ul>
</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>
	<code>INPUT.TXT</code> kirish faylining yagona satrida bizning eraga tegishli bo'lgan yilning nomerini ifodalaydigan <code>1</code> dan <code>9999</code> gacha bo'lgan butun son berilgan.
</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>
	<code>OUTPUT.TXT</code> chiqish faylining yagona satrida dasturchilar kuni sanasini <code>DD/MM/YYYY</code> formatida chop eting. bu yerda <code>DD</code> — sana, <code>MM</code> — oy raqami(<code>01</code> — yanvar, <code>02</code> — fevral, ..., <code>12</code> — dekabr), <code>YYYY</code> — yil raqami.
</p>
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
	    <td>2000</td>
	    <td>12/09/2000</td>
	  </tr>
  	<tr>
		  <td>2</td>
	    <td>2009</td>
	    <td>13/09/2009</td>
	  </tr>
  	<tr>
		  <td>3</td>
	    <td>9</td>
	    <td>13/09/0009</td>
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
  return 0;
}
```
