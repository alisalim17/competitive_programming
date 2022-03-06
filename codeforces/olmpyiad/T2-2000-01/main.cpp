
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str = "Lorem Ipsum has been the industry's standard.dummy text ever, since the 1500s, when an unknown printer. took a galley of type and scrambled it to make a type specimen book.";
    string str2 = "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s when an unknown printer took a galley of type and scrambled it to make a type specimen book";
    string str3 = "";
    int k = 0;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == str2[k])
        {
            cout << "str[i] = " << i << " --> " << str[i] << " "
                 << "str2[k] = "
                 << k
                 << " --> " << str2[k] << endl;
            str3 += str[i];
            k++;
        }
    }
    cout << (str3 == str2 ? "YES" : "NO");
    return 0;
}
