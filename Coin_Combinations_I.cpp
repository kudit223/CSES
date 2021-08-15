Time limit: 1.00 s Memory limit: 512 MB
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 8 ways:
2+2+5
2+5+2
5+2+2
3+3+3
2+2+2+3
2+2+3+2
2+3+2+2
3+2+2+2
Input

The first input line has two integers n and x: the number of coins and the desired sum of money.

The second line has n distinct integers c1,c2,…,cn: the value of each coin.

Output

Print one integer: the number of ways modulo 109+7.

Constraints
1≤n≤100
1≤x≤106
1≤ci≤106
Example

Input:
3 9
2 3 5

Output:
8

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
