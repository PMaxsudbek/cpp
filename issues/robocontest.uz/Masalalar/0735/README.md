
<h1>Masala #<a href="https://robocontest.uz/tasks/0735">0735</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/adizbek">Adizbek Ergashev</a></h2>
<h2>Optimize</h2>
<p>Quyidagi dastur yechimini chop eting!.#include <iostream>using namespace std;int main(){int n;cin >> n;int *a = new int[n+1];for(int i = 1; i <= n; i ++) cin >> a[i];int q, t, id, m;cin >> q;for(int i = 0; i < q; i ++){cin >> t >> id;if(t == 0)cin >> a[id];else{m = 1;for(int j = 1; j <= n; j ++)if(id != j)m = (1LL * m * a[j]) % 1000000007;cout << m << endl;}}return 0;}</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylining dastlabki satrida\(n (1 \le n \le 10^5)\)ning qiymati kiritiladi. Ikkinchi satrda\(n\)ta butun son\(a (0 \le a_i \le 10^9)\)massiv elementlari bo’sh joy bilan ajratilgan holda kiritiladi. Uchunchi satrda bitta butun son,\(q (1 \le q \le 10^5)\)soni kiritiladi. to’rtinchi qatordan boshlab\(q\)ta qatorda 2 xil turdagi so’rovdan biri kiritiladi. So’rovlar quyidagicha:0 id\(a_{id}\)- 0 bilan boshlangan satrda\(id (1 \le id \le n)\)va\(a_{id} (0 \le a_{id} \le 10^9)\)kiritiladi.1 id - 1 bilan boshlangan satrda faqat\(id (1 \le id \le n)\)kiritiladi.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Kiritilgan qiymatlar uchun yuqoridagi dastur kodining natijasini chop eting.</p>
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
                <td>5 
1 2 3 4 5
3
1 3
0 2 4
1 4</td>
                <td>40
60</td>
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
