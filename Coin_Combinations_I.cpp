#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())
main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n),dp(x+1,0);
    loop(i,0,n)
    cin>>v[i];
    dp[0]=1;
    
    loop(i,1,x+1)
    {
        loop(j,0,n)
        {
            if(v[j]>i) continue;
            dp[i]=(dp[i]+dp[i-v[j]])%mod;
        }

    }
    // for(auto c:dp)
    // cout<<c<<" ";
    cout<<dp[x]%mod;


    

    return 0;
}