// g++ -o main_2 ./main_2.cpp && ./main_2.exe

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(string w)
{
    if (w.length() > 10)

        cout << w[0] << w.length() - 2 << w[w.length() - 1];
    else
        cout << w;
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string word;
        cin >> word;
        solve(word);
    }
    return 0;
}
