
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int ans = 0;
void solve()
{
    int k = 3;
    int c = 0;

    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        if (n)

            c++;
    };
    if (c >= 2)
        ans++;
}
int main()
{
    int n;
    cin >> n;
    while (n--)

        solve();

    cout << ans;
    return 0;
}
