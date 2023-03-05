#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,a,s,p=0;
    vector<ll> v;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        s=x-v[i];
        if(s<0)
        continue;
        auto it=find(v.begin(),v.end(),s);
        if(it!=v.end()&&i!=it-v.begin())
        {
            p++;
            cout<<i+1<<" "<<it-v.begin()+1;
            break;
        }
        
        
    }
    if(p==0)
    cout<<"IMPOSSIBLE";
    return 0;
}
