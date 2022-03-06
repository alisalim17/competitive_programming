#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, swapCount = 0;
    cin >> n;
    int ln = n - 1;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    /*
    INPUT : 3 8 9 || 2 3 6 5

    */
    for (int k = 0; k < n - 1; k++)
    {
        if (a[k] % 2 == 0 && a[ln] % 2 != 0)
        {
            swap(a[k], a[ln]);
            ln--;
            swapCount++;
        }
    }
    cout << swapCount;
    return 0;
}
