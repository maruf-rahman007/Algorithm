#include<bits/stdc++.h>

using namespace std;

int main()
{
    int antony = 0;
    int danik = 0;

    int t;
    cin>>t;

    while (t--)
    {
        char a;
        cin>>a;
        if(a == 'A') antony ++;
        else danik++;
    }
    if(antony>danik) cout<<"Anton"<<endl;
    else if (danik>antony) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}
