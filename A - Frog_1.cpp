#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())
main()
{
    ll n,minn=0,value,p=0; 
    cin>>n;
    //******************************approach 1******************************************
     /*vector<ll> v(n);
    for(ll i=0;i<n;i++)
    cin>>v[i];

   reverse(v.begin(),v.end());
    while (p<n-2)
    {
      value=min(abs(v[p]-v[p+1]),abs(v[p]-v[p+2]));
        minn+=value;
        if(value==abs(v[p]-v[p+2]))
        p++;
         
         p++;
         
    }
    cout<<p<<" ";
    if(p==n-2)
    minn+=abs(v[p]-v[p+1]);
   
   cout<< minn;
    */

   //****************************************approach 2********************************

   vector<ll>v(n+1);
  for(ll i=1;i<n+1;i++)
    cin>>v[i];

    vector<ll>dp(n+1,0);
    dp[1]=0;
    dp[2]=abs(v[2]-v[1]);
    for(ll i=3;i<n+1;i++)
    {
      dp[i]=min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));
    }
    cout<<dp[n];

       
return 0;



  
}