#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
    Time complexity
    O(n^2) -> worst , Average
    O(n) -> Best
*/