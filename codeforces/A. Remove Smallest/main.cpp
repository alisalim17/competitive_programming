#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        int c = n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        for (int k = 0; k < n - 1; k++)
            if (c > 1 && arr[k + 1] - arr[k] <= 1)
                c--;
        cout << (c == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
