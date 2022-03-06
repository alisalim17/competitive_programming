
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string a1 = "A";
    string a2 = "";
    int a = 1, b = 0;

    for (int i = 0; i < k; i++)
    {
        for (int k = 0; k < a1.length(); k++)
        {
            if (a1[k] == 'A')
            {
                a2 += "B";
                a--;
                b++;
            }
            else if (a1[k] == 'B')
            {

                a2 += "BA";
                a++;
            }
        }
        a1 = a2;
        a2 = "";
    }
    cout << a << " " << b;
    return 0;
}
