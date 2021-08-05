Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3
Input

The only input line has an integer n.

Output

Print the number of ways modulo 109+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
4


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
