#include<bits/stdc++.h>
using namespace std;
#define sort(a) sort(a.begin(),a.end())
typedef long long ll;
int main()
{
    ll n,s,result=0;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v);
    s=v[n/2];
    for(auto x:v)
    result+=abs(x-s);
    cout<<result;
    return 0;
}