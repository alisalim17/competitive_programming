#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*
12345
54321
*/

int main()
{

    long long n, k, o, e, ans;
    cin >> n >> k;
    o = (n + 1) / 2, e = n - o;
    // means it's even
    if (k <= o)
        ans = (k * 2) - 1;
    else
        ans = (k - o) * 2;

    cout << ans;

    return 0;
}