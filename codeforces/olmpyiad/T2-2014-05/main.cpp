#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "", s2 = "";

    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            continue;
        else
            s2 += s[i];
    }

    int m = 0;
    vector<int> n = {};
    for (int i = 0; i < s.length(); i++)
    {

        if (// burani bele yazanda olmur(biri string,biri int oldugu ucun) -> s[m] == i) 
            m++;
        else
            n.push_back(i);
    }

    cout << m;
    for (int i = 0; i < m; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}
