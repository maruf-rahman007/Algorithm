#include<bits/stdc++.h>

using namespace std;


string bubblesort(string s,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
        
    }
    return s;
}



string optimizedBubblesort(string s,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(s[j]>s[j+1]){
                flag = true;
                swap(s[j],s[j+1]);
            }
        }
        if(!flag) break;
        
    }
    return s;
}


int main(){
    string s,s2;
    cin>>s;
    s2=s;
    string ans = bubblesort(s,s.length());
    string ans2 = optimizedBubblesort(s2,s.length());
    cout<<ans<<endl;
    cout<<ans2<<endl;
    return 0;
}