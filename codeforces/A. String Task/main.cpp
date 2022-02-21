#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string n;
    cin >> n;
    string s2 = "";
    transform(n.begin(), n.end(), n.begin(), ::tolower);

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'a' || n[i] == 'o' || n[i] == 'y' || n[i] == 'e' || n[i] == 'u' || n[i] == 'i')
            continue;
        else
        {
            s2 += ".";
            s2 += n[i];
        }
    };
    cout << s2;
    return 0;
}