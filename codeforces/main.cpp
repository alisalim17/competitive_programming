#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, j = 0, sum = 0, sum2 = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    };

    sort(a, a + n);
    for (int k = n - 1; k >= 0; k--)
    {
        sum2 += a[k];

        j++;
        if (sum2 > sum - sum2)
            break;
    };
    cout << j;
    return 0;
}
