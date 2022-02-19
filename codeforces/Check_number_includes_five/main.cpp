
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a;
    int n;
    bool isFive = false;

    cin >> a;

    while (a > 1)
    {
        n = a % 10;
        a /= 10;
        if (n == 5)
        {
            isFive = !isFive;
            break;
        }
    }
    if (isFive)

        cout << "YES";
    else

        cout << "NO";
    return 0;
}