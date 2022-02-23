#include <bits/stdc++.h>
#define ll long long

using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1;
         i < n; i++)
    {
        int j = i;
        if (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j], a[j - 1]);
            j--;
        }
    }
}
int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertionSort(a, n);
    cout << "SORTED : ";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << endl;
    }

    return 0;
}
