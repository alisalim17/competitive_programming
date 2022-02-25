#include <bits/stdc++.h>
#define ll long long

using namespace std;

void merge(int arr[], int l, int r, int m)
{

    int i = l, j = m + 1, k = l;
    int temp[r + 1];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
        while (i <= m)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        while (j <= r)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    for (int p = l; p <= r; p++)
    {
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, r, m);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << i << " : " << arr[i] << endl;
    }
    return 0;
}
