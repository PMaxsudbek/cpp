#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float V1, V2, S, T;
    cout << "1-avtomobilning tezligini kiriting ==>";cin >> V1;
    cout << "2-avtomobilning tezligini kiriting ==>";cin >> V2;
    cout << "Ular orasidagi masofani kiriting ==>";cin >> S;
    cout << "Qancha vaqtdan kiyingi ular orasidagi masofa kerak ==>";cin >> T;
    cout << T << " vaqtdan keyin ular orasidagi masofa ==>" << fabs(S - T * (V1 + V2));
}
