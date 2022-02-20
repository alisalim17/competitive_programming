#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*
3 8 9 - > 8 3 9
n = 357486
n/

*/

int main()
{
    int e_n = 0, o_n = 0;
    int n;
    cin >> n;

    while (n > 1)
    {
        if ((n % 10) % 2 == 0)
            e_n++;
        else
            o_n++;

        n /= 10;
    }
    cout << "The number of even numbers is " << e_n << endl;
    cout << "The number of odd numbers is " << o_n << endl;
    return 0;
}