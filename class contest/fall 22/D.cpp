#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>runs;
    for (int i = 0; i < n; i++)
    {
        int run;
        cin>>run;
        runs.push_back(run);
    }
    int swaps = 0;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(runs[j]>runs[j+1]){
                swap(runs[j],runs[j+1]);
                swaps++;
            }
        }
        
    }
    cout<<swaps<<endl;
    
    return 0;
}