
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string str;
    cin >> str;
    int last = str[0];
    int j = 0;
    bool isDangerous = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == last)
        {

            j++;
            if (j >= 7)
            {
                isDangerous = true;
                break;
            }
        }
        else
            j = 1;
        last = str[i];
    }
    printf(isDangerous ? "YES" : "NO");

    return 0;
}