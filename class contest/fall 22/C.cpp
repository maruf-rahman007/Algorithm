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
    
    sort(runs.begin(),runs.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(runs[i]>50)
            count++;
    }
    for(int i =0 ;i<n;i++)
    {
        cout<<runs[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}