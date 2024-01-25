#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(int i, string &s)
{
    if (i >= s.size()/2)
        return true;
    if(s[i]!=s[s.size()-i-1])
        return false;
    return isPalindrom(++i,s);
}

int main()
{
    string data;
    cin>>data;
    
    if(isPalindrom(0,data)){
        cout<<"Pelindrom "<<endl;
    }
    else{
        cout<<"Not Pelindrom "<<endl; 
    }
    return 0;
}

/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/