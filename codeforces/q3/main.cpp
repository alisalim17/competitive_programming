// g++ -o main ./main.cpp && ./main.exe

#include <bits/stdc++.h>
#define ll long long
#include <vector>
using namespace std;

void solve()
{
    bool pass = false;
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (pass)
        {
            pass = false;
            continue;
        }
        if ((a[j] % 2 == 0 && a[j + 1] != 0) || (a[j] % 2 != 0 && a[j + 1] % 2 == 0))
        {
            cout << "WORKED +>>>>" << a[j] % 2 << " " << a[j + 1] % 2;
            ans = ans + 1;
            pass = true;
        }
        // cout << a[j] << " " << a[j + 1] << endl;
    }
    cout << "ANSWER : " << 6 % 2 << " " << 4 % 2;
}

int main()
{
    solve();
    return 0;
}
