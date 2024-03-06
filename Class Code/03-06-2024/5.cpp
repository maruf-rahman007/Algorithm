// subs string finder

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string sub;
    cin>>s;
    cin>>sub;
    int i = 0;
    int j = 0;
    while (i<s.size())
    {
        if(s[i]==sub[j])
        {
            j++;
            if(sub[j]=='\0')
            {
                cout<<"Sub string Found "<<endl;
                return 0;
            }
            else
            {
                i++;
            }
        }
        else 
        {
            i++;
            j = 0;
        }
    }
    cout<<"Sub string not found "<<endl;
    return 0;   
}