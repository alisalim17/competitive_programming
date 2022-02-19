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
    char *p a

        int ans = 0;
    int index = 0;
    int local_min = 0;
    for (int j = 0; j < n; ++j)
    {
        // 1 -2 1 => j=1 a[j]= -2
        if (a[j] < a[j - 1] && a[j] < a[j + 1])
        {
            local_min = a[j];
            index = j;
            ans = ans == 0 ? j ?
        }
    }
}
int main()
{

    solve();

    return 0;
}
