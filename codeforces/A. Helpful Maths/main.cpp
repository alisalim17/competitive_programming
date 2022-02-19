
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    char a[100];
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            a[j] = s[i];
            j++;
        }
    }
    sort(a, a + j);
    cout << a[0];
    for (int k = 1; k < j; k++)
    {
        cout << "+" << a[k];
    }
}

int main()
{
    solve();
    return 0;
}