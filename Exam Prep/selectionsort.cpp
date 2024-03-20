#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            arr[i] = arr[i] + arr[min_idx];
            arr[min_idx] = arr[i] - arr[min_idx];
            arr[i] = arr[i] - arr[min_idx];
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}