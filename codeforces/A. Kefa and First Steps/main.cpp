#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*
12345
54321
*/

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 1;
    int max_c = 1;
    for (int k = 0; k < n - 1; k++)
    {
        if (a[k] > a[k + 1])
        {
            max_c = max(max_c, c);
            c = 1;
        }
        else
            c++;
    }

    cout << max(max_c, c);

    return 0;
}