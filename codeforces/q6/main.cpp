
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 7 == 0)
    {
        cout << n << endl;
    }
    else
    {

        ll r = n % 7;

        cout << (((n - r) / 7) + 1) * 7 << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    int a[t];
    for (int k = 0; k < t; k++)

    {
        ll n;
        ll ans;
        f
                cin >>
            n;
        if (n % 7 == 0)
        {
            ans = n;
        }
        else
        {

            ll r = n % 7;
            ans = (((n - r) / 7) + 1) * 7;
        }

        a[k] = ans;
    };
    for (int b = 0; b < t; b++)
    {
        cout << a[b] << endl;
    }

    return 0;
}
