#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        cout << 2;
        for (int i = 0; i < 2; i++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (k == 2)
                {
                    continue;
                }
                if (i == 0 && k % 2 == 0)
                {
                    cout << " " << k;
                }
                else if (i == 1 && k % 2 != 0)
                {
                    cout << " " << k;
                }
            }
        }
    }
    return 0;
}
