
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    int kt = k;
    for (int i = 0; i < k; i++)
    {
        int a = n / kt;
        if (i > 0)
            cout << " ";
        cout << a;
        n -= a;
        kt--;
    }

    return 0;
}
