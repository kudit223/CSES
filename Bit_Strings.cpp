#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
     ll n,f=2,ct=1,m=1e+9+7;
    cin>>n;
   // vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
     
      /* v.insert(v.begin()+i,1);
        
        v.pop_back();
       do
        {
            ct+=1;
            
        }while(prev_permutation(v.begin(),v.end()));*/
         
        ct=(ct*f)%m;
        
    }
    cout<<ct;
}
