/*
Problem :
    given an array and a sum
    find and count how many sub arrays are there that can produce the sum

PseudoCode:
    pass on index , array and sum
    pick and not pick
*/


#include <bits/stdc++.h>

using namespace std;

int countSubArray(int idx, int countSum, int sum, int arr[], int n)
{
    if (idx == n)
    {
        if (countSum == sum)
        {
            return 1;
        }
        return 0;
    }
    countSum += arr[idx];
    int taken = countSubArray(idx + 1, countSum, sum, arr, n);
    countSum -= arr[idx];
    int notTaken = countSubArray(idx + 1, countSum, sum, arr, n);
    return taken+notTaken;
}


int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    int ans = countSubArray(0, 0, sum, arr, n);
    
    cout<<ans<<" ";

    return 0;
}
