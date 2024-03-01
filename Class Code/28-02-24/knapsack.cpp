#include<bits/stdc++.h>

using namespace std;

int main(){

    int weignt[] = {20,10,15,10,5};
    int valu[] = {100,60,70,40,80};
    int n = 5;
    double perkgweignt [n] = {};
    vector<int>finalBagpac;
    int weigntCap = 50;
    for (int i = 0; i < n; i++)
    {
        perkgweignt[i]=valu[i]/weignt[i];
    }
    
    for (int i = n-1; i >= 1; i--)
    {
        bool flag = false; 
        for (int j = 0; j < i; j++)
        {
            if(perkgweignt[j]<perkgweignt[j+1]){
                int temp = weignt[j];
                int temp2 = valu[j];
                int temp3 = perkgweignt[j];
                weignt[j] = weignt[j+1];
                valu[j] = valu[j+1];
                perkgweignt[j] = perkgweignt[j+1];
                weignt[j+1] = temp;
                valu[j+1] = temp2;
                perkgweignt[j+1] = temp3;
                flag = true;
            }
        }
        if(!flag) break;
        
    }

    for (int i = 0; i < n; i++)
    {
        if(perkgweignt[i] <= weigntCap){
            finalBagpac.push_back(weignt[i]);
            weigntCap-=weignt[i];
        }
    }
    for (int i = 0; i < finalBagpac.size(); i++)
    {
        cout<<finalBagpac[i]<<" ";
    }

    return 0;
}
