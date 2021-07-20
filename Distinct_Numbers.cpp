#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    vector<int > v(tt);
    for(int i=0;i<tt;i++)
    {
         cin>>v[i];
    }
    sort(v.begin(),v.end());
    int s=1;
    for(int i=0;i<v.size()-1;i++)
    {
         if(v[i]!=v[i+1])
        s++;
    
    }
    cout<<s;
}