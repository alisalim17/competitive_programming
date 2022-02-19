
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string str1, str2;
    int c = 0;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (str1 < str2)
        c = -1;
    else if (str1 > str2)
        c = 1;
    cout << c;
}

int main()
{
    solve();
    return 0;
}