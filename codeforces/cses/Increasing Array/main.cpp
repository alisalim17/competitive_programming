#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    /*
    999999999+999999999+999999999+999999999+999999999+999999999+999999999+999999999+999999999
    1000000000 1 1 1 1 1 1 1 1 1
    1000000000 1000000000 1 1 1 1 1 1 1 1

    */
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll c = 0;
    for (int i = 0; i < n - 1; i++)

        if (a[i + 1] < a[i])
        {

            long long k = a[i] - a[i + 1];
            c += k;
            a[i + 1] += k;
        };
    cout << c;
    return 0;
}
