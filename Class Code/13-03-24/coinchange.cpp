#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int coins[n];
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int target;
    cin>>target;
    int dp[target+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=coins[i];j<=target;j++)
        {
            dp[j]+=dp[j-coins[i]];
        }
    }
    cout<<dp[target]<<endl;
    return 0;
}