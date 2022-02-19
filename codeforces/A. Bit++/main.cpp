
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int x = 0;
void solve()
{
    string w;
    cin >> w;
    if (w.find("+") < w.length())
        x++;
    else
        x--;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    cout << x;
    return 0;
}