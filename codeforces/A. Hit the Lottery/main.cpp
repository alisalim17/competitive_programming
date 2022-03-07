#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a[5] = {100,
                20,
                10,
                5,
                1};

    int m, ans = 0;
    cin >> m;
    for (int i = 0; i < 5; i++)
    {
        int k = m / a[i];
        ans += k;
        m -= k * a[i];
    }

    cout << ans;
    return 0;
}
