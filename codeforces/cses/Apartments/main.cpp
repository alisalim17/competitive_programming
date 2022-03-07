
#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

    int n, m, k;
    cin >> n >> m >> k;
    int sizeApar[n];
    int sizeDes[m];
    for (int i = 0; i < n; i++)
    {
        cin >> sizeApar[i];
    }
    for (int i = 0; i < m; i++)
        cin >> sizeDes[i];

    int i = 0, j = 0, ans = 0;
    sort(sizeApar, sizeApar + n);
    sort(sizeDes, sizeDes + m);

    while (i < n && j < m)
    {
        if ((sizeDes[j] >= (sizeApar[i] - k)) && (sizeDes[j] <= (sizeApar[i] + k)))
        {
            ans++;
            i++;
            j++;
        }
        else if (sizeDes[j] < (sizeApar[i] - k))
            j++;
        else if (sizeApar[i] + k < sizeDes[j])
            i++;
    }

    cout << ans;
    return 0;
}