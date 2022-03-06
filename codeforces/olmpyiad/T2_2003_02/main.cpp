// int n, k;
// cin >> n >> k;
// int sum = 0;
// int m = 0;
// for (int i = 1; i <= n; i++)
// {
//     sum += i * 5;
//     if (sum + k <= 240)
//         m++;
// }
// cout << m;

#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >> n;

    for (int i = 1;
         i <= n; i++)
    {
        for (int k = i + 1; k <= n; k++)
        {
            if ((i + k) % 2 != 0)
                cout << i << " " << k << endl;
        }
    }

    return 0;
}
