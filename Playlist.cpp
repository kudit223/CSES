#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())
main()
{
    // *****************************************************Approach_1************************************************
    // ll n,k,best=0,p;
    // cin>>n;
    // vector<ll> s;
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>k;
    //     auto it=find(s.begin(),s.end(),k);
    //     if(it==s.end())
    //     {
    //     s.push_back(k);
        
    //     p=s.size();
    //     best=max(best,p);
    //     }
    //     else
    //     {
    //         it++;
    //         s.erase(s.begin(),it);
    //         s.push_back(k);   
    //     }
        
    // }
    // cout<<best;
    ll n,i=0,j=0,c=0;
    cin>>n;
    vector<ll> v(n);
    set<ll> s;
    for(ll i=0;i<n;i++)
     cin>>v[i];
    
    while (j<n)
    {
        if(!s.count(v[j]))
        {
            s.insert(v[j]);
            c=max(c,j-i+1);
            j++;
        }
        while (s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }
        
        
    }
    cout<<c;
    


   return 0;

}
    