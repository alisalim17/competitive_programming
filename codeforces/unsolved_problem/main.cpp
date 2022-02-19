
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> numbers;
    vector<int> swapped_numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
        swapped_numbers.push_back(x);
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (swapped_numbers[j] > swapped_numbers[j + 1])
            {
                swap(swapped_numbers[j + 1], swapped_numbers[j]);
            }
        }
    }
    int f = swapped_numbers[0];
    int s = swapped_numbers[1];

    for (int i = 0; i <= n; i++)
    {

        vector<int> tempArr = numbers;

        if (tempArr[0] != f || tempArr[1] != s)
            swap(tempArr[i], tempArr[i + 1]);
        if (tempArr[0] == f && tempArr[1] == s)
        {
            cout << tempArr[0];
            for (int l = 1; l < n; l++)
            {
                cout << " " << tempArr[l];
            }
            cout << "\n";
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
    return 0;
}
