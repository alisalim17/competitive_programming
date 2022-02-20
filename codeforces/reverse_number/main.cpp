#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*
12345
54321
*/

int main()
{
    int n, k = 0;
    cin >> n;
    // # Solution 1

    // vector<int> a = {};
    // while (n > 1)
    // {
    //     a.push_back(n % 10);
    //     n /= 10;
    // }
    // a.push_back(n % 10);

    // for (int i = 0; i < a.size(); i++)
    //     cout << a[i];

    // # Solution 2
    while (n >= 1)
    {
        k = (10 * k) + n % 10;
        n /= 10;
    }
    cout << k;

    return 0;
}