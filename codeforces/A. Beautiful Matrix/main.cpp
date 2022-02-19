
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{

    int c1, r1;
    for (int c = 0; c < 5; c++)
    {
        for (int r = 0; r < 5; r++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                c1 = c + 1;
                r1 = r + 1;
            }
        }
    }

    cout << abs(3 - c1) + abs(3 - r1);
}

int main()
{
    solve();
    return 0;
}
