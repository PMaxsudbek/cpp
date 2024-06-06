# Begin36
## Birinchi avtomobilning tezligi `V_1` km/s, ikkinchisiniki `V_2` km/s, ular orasidagi masofa `S`. Ular biri-biridan uzoqlasha boshlasa `T` vaqtdan keyin ular orasidagi masofani aniqlaydigan dastur tuzilsin.
```cpp
#include <iostream>
using namespace std;
int main()
{
    float V1, V2, S, T;
    cout << "1-avtomobilning tezligini kiriting ==>";cin >> V1;
    cout << "2-avtomobilning tezligini kiriting ==>";cin >> V2;
    cout << "Ular orasidagi masofani kiriting ==>";cin >> S;
    cout << "Qancha vaqtdan kiyingi ular orasidagi masofa kerak ==>";cin >> T;
    cout << T << " vaqtdan keyin ular orasidagi masofa ==>" << S + T * (V1 + V2);
}
```
