// g++ -o main_2 ./main_2.cpp && ./main_2.exe

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    bool ans = false;
    int n;
    cin >> n;
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (n == a[i] * a[j])
            {
                ans = true;
                break;
            }
        }
    }
    if (ans == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    solve();
    return 0;
}
