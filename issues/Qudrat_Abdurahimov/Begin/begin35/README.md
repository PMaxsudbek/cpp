# Begin35
## Qayiqning tezligi `V` km/s, daryo oqimining tezligi `U` km/s, (`U < V`). Qayiqning daryo oqimi bo‘yicha harakatlanish vaqti `T_1`, oqimga qarshi `T_2`. Qayiqni yurgan `S` yo‘lini aniqlovchi programma tuzilsin.
```cpp
#include <iostream>
using namespace std;
int main()
{
    float V, U, T1, T2, S, S1, S2;
    cout << "Eslatma qayiqning tezligi oqimnikiga nisbatan katta bo'lsin massala shartiga ko'ra" << endl;
    cout << "Qayiqning tezligini kiriting ";cin >> V;
    cout << "Oqimning tezligini kiriting ";cin >> U;
    cout << "Oqim bo'ylab harakat vaqtini kiriting ";cin >> T1;
    cout << "Oqimga harakatiga qarshi vaqtini kiriting ";cin >> T2;
    S1 = T1 * (V + U);
    S2 = T2 * (V - U);
    S = S1 + S2;
    cout << "Butun bosib utgan yo'li ==>" << S;
}
```
