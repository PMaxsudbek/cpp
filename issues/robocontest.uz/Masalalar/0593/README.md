
<h1>Masala #<a href="https://robocontest.uz/tasks/0593">0593</a> #<a href="https://robocontest.uz/tasks?category=1">Noma'lum</a></h1>
<h2> Muallif: <a href="https://robocontest.uz/profile/thecr4sh">Обид Синдаров</a></h2>
<h2>Plus-Minus</h2>
<p>Plus va minus bir birini yoqtirmaydi. Ular joylashgan qishloqda\(N\)ta(\(1\)dan\(N\)gacha raqamlangan) chorraha va bu chorrahalarni bog'lab turuvchi\(M\)ta bir xil uzunlikdagi ikki tomonlama harakat qiladigan yo'llar mavjud. Plus minus turgan chorrahaga, minus esa plus turgan chorrahaga borishni istaydi ammo ikkisi bir chorrahada uchrashib qolishni istamaydi (umumiy yo'lda qarama qarshi harakatlanishi mumkin 1-testga qarang). Ikkisi ham optimal harakat qilib plus\(N-\)chorrahaga, minus\(1-\)chorrahaga borishi kerak. Ularning tezliklari bir xil va doim harakatda qachonki ikkisi ham manziliga bir vaqtda yetib kelsa harakatni to'xtatadi. Dastlab plus\(1-\)chorrahada, minus esa\(N-\)chorrahada joylashgan.</p>
<h2>Kiruvchi ma'lumotlar:</h2>
<p>Kirish faylining dastlabki satrda\(N(2\leq N\leq200)\)va\(M(1\leq M\leq N(N-1)/2)\)ikkita natural son mos ravishda chorrahalar va yo'llar soni. Keyingi\(M\)ta satrda\(u, v(1\leq u,v\leq N)\)\((u\neq v)\)chorrahalar o'rtasida yo'l mavjudligi.</p>
<h2>Chiquvchi ma'lumotlar:</h2>
<p>Chiqish faylining birinchi satrda plus va minus ikkisi ham bir xil vaqtda manziliga yetib olguncha minimal tashrif buyurgan chorrahalar soni\(K\)va keyingi 2 ta satrda mos ravishda"P:"va"M:"belgilari va K tadan son ketma-ket tashrif buyurish chorrahalarni probel bilan ajratilgan holda chop eting (agar bunday yechimlar bir nechta bo'lsa istalganini, dastlab plusni harakatini keyingi satrda minusni harakatini chop eting). Agar ikkisi bir vaqtda manzilga borishning imkoni bo'lmasa"Infinite!"so'zinini chop eting.</p>
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
                <td>2 1
1 2</td>
                <td>2
P: 1 2
M: 2 1</td>
            </tr>
            <tr>
                <td>2</td>
                <td>5 4
1 2
4 3
3 1
5 3</td>
                <td>Infinite!</td>
            </tr>
            <tr>
                <td>3</td>
                <td>7 6
1 6
1 5
7 5
3 4
2 7
5 3</td>
                <td>7
P: 1 5 3 4 3 5 7
M: 7 2 7 5 1 6 1</td>
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
