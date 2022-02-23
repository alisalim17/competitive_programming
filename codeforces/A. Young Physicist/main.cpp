#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int xs = 0, ys = 0, zs = 0, t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }
    if (xs == 0 && ys == 0 && zs == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
