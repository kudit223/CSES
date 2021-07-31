
//approch:pos of x> pos of x+1 then result+1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sort(a) sort(a.begin(),a.end())
int main()
{
  ll n,result=1;
  cin>>n;
  vector<ll> v(n),p(n+1,0);
  for(ll i=0;i<n;i++)
  cin>>v[i];
  
  for(ll i=0;i<n;i++)
   p[v[i]]=i+1;
  
  for(ll i=1;i<n;i++)
      if(p[i]>p[i+1])
      result++;


cout<<result;


     return 0;


}