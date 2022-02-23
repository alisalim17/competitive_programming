#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    // string s = "ali";
    // sort(s.begin(), s.end());
    // cout << s;
    // pair<int, int> mypair = {4, 6};
    // cout << mypair.first;
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    /*
    1 7 2 5
    1) 7 1 2 5
    2) 7 5 2 1
    3) 2 5 7 1
    4) 2 5 1 7
    5)
            */

    for (int k = 0; k < n - 1; k++)
    {
        int min = k;
        for (int j = k + 1; j < n; j++)
        {
            cout << "j " << j << endl;
            if (a[j] > a[min])
            {
                min = j;
            }
        };
        if (min != k)
            swap(a[min], a[k]);
    }

    cout << "SORTED ARRAY" << endl;
    for (int m = 0; m < n; m++)
    {
        cout << a[m] << endl;
    }
    return 0;
}
