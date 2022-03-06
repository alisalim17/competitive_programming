#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (10 - n < 0)
    {
        int sum = 0;
        while (n >= 1)
        {
            sum += (n - (n / 10) * 10);
            n /= 10;
        }
        n = sum;
    }
    cout << n;
    return 0;
}
