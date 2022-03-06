
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int k = 0;
    double a[10000];
    //    i -> mexrec
    for (double i = 1; i <= n; i++)
    {
        for (double j = n; j > 0; j--)
        {
            // en kicik ortaq bolen -> j/n
            int n1 = round(j);
            int n2 = round(i);
            int n3 = __gcd(n1, n2);
            if (n3 == 1 && (j / i) <= 1)
            {
                a[k] = j / i;
                k++;
            }
        }
    }

    sort(a, a + k);
    for (int m = 0; m < k; m++)
    {
        cout << a[m] << endl;
    }
    return 0;
}
