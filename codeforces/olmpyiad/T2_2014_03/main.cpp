
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int a1, a2;
    bool isA1 = false, isA2 = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!isA1 && a[i] > 0)
        {
            a1 = a[i];
            isA1 = true;
        }
        else if (!isA2 && a[i] < 0)
        {
            a2 = a[i];
            isA2 = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            a1 = min(a1, a[i]);
        else
            a2 = max(a2, a[i]);
    }

    cout << a1 + a2;

    return 0;
}
