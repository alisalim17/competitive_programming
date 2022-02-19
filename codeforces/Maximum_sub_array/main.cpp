
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n = 8;
    int myArray[n] = {
        -1,
        2,
        4,
        -3,
        5,
        2,
        -5,
        2

    };
    int best = 0,
        sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = max(myArray[k], sum + myArray[k]);
        cout << k << " : " << myArray[k] << " sum : " << sum << endl;
        best = max(best, sum);
    }
    cout << best << "\n";
}

int main()
{
    solve();
    return 0;
}
