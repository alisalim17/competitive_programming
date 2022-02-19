// g++ -o main ./main.cpp && ./main.exe

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int min = a - b;
    int plu = a + b;
    int mul = a * b;
    if (mul > min && mul > plu)
    {
        cout << mul;
    }
    else if (min > mul && min > plu)
    {
        cout << min;
    }
    else
    {
        cout << plu;
    }
}

int main()
{
    solve();
    return 0;
}
