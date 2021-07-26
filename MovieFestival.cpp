#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
   
    ll countt=1;
    cin>>n;
    if(n==0)
    {
    countt=0;
    return 0;
    }
    vector<pair<ll , ll> >v;
    ll a,b;
    while (n--)
    {
        cin>>a>>b;
        v.push_back({b,a});
    }
     sort(v.begin(),v.end());
    
    ll p=v[0].first;
    for(ll i=1;i<v.size();i++)
    {
       if(p<=v[i].second)
       {
       countt++;
       p=v[i].first;

       }
    }
    cout<<countt;
     return 0;


}
