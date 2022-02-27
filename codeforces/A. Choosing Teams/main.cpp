#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    //  0 4 5 1 0
    //  0 0 1 4  5
    int n, k, c = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        if (a[i] + k <= 5)
            c++;
    }
    cout << c / 3;

    return 0;
}
