
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(numbers[j + 1], numbers[j]);
            }
        }
    }
    for (int l = 0; l < n; l++)
        cout << numbers[l] << endl;
}

int main()
{
    solve();
    return 0;
}
