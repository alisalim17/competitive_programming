#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    long double n, m, a;
    cin >> n >> m >> a;
    ll x = ceil(n / a);
    ll y = ceil(m / a);
    cout << x * y;
    return 0;
}