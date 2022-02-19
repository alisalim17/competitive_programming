// PROBLEM #5
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int max = 0;
    int count = 1;
    int last = 0;

    for (int j = 0; j < n; j++)
    {
        if (a[j] == last)
        {
            count = count + 1;
        }
        else
        {
            if (count > max)
                max = count;
            count = 1;
        }
        last = a[j];
    };
    cout << max;
}
int main()
{

    solve();

    return 0;
}
