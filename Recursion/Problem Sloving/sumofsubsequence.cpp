/*
Problem :
    given an array and a sum
    find and print all the sub arrays that can produce the sum

PseudoCode:
    pass on index , array and sum
    pick and not pick
*/


#include <bits/stdc++.h>

using namespace std;

void printSubArray(int idx, vector<int> &ds, int countSum, int sum, int arr[], int n)
{
    if (idx == n)
    {
        if (countSum == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    countSum += arr[idx];
    printSubArray(idx + 1, ds, countSum, sum, arr, n);
    countSum -= arr[idx];
    ds.pop_back();
    printSubArray(idx + 1, ds, countSum, sum, arr, n);
}


void printSubArrayModified(int idx, vector<int> &ds, int countSum, int sum, int arr[], int n)
{
    if (idx == n)
    {
        if (countSum == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    countSum += arr[idx];
    printSubArray(idx + 1, ds, countSum, sum, arr, n);
    countSum -= arr[idx];
    ds.pop_back();
    printSubArray(idx + 1, ds, countSum, sum, arr, n);
}


int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int sum = 2;

    printSubArray(0, ds, 0, sum, arr, n);

    return 0;
}
