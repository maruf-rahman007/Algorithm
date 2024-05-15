#include<bits/stdc++.h>

using namespace std;

int main()
{

    stack<int>st;
    int n;
    cin>>n;
    while (n--)
    {
        int num;
        cin>>num;
        st.push(num);
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}