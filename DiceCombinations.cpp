#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())

int solve(ll a)
{
  vector<ll> dp(a+1,0);
 
  dp[1]=1;
  dp[2]=2;
 ll value=1;
  for(ll i=3;i<=a;i++)
  {
  
    if(i<=6)
    {
    value+=dp[i-1];
   dp[i]=value;
   dp[i]+=1;
    }
    else
    dp[i]=(dp[i-1]%mod+dp[i-2]%mod+ dp[i-3]%mod+ dp[i-4]%mod+ dp[i-5]%mod+ dp[i-6]%mod)%mod;  
    
  }
  return dp[a];
}

int main()
{
    ll a;
    cin>>a;

    cout<<solve(a);
    return 0;
}