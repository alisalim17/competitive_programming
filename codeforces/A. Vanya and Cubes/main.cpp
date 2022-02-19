// #include <bits/stdc++.h>
// #define ll long long;
// using namespace std;

// void solve()
// {
//     int n, l = 1, last = 0;
//     cin >> n;
//     while (n >= last)
//     {
//         last += l;
//         l++;
//         n -= last;
//     }
//     cout << l;
// }

// int main()
// {
//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n, l = 0, last = 1;
    cin >> n;

    // last = last + l
    // n > last
    while (n >= last)
    {
        l++;
        last += l;
        n -= last;
    }
    cout << l;
}

int main()
{

    solve();

    return 0;
}