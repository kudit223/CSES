#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll a,b,maxx,minn;
        cin>>a>>b;
        maxx =max(a,b);
        minn=min(a,b);
       
      /*  while(minn>0||maxx>0)
        {
            maxx=maxx-2;
          minn=minn-1;
        
           
          if(min(maxx,minn)!=minn)
          swap(minn,maxx);
          
         }
        if(maxx==0&&minn==0)
         cout<<"YES"<<"\n";
         
          else
        cout<<"NO"<<"\n";*/
        if((a+b)%3==0&&minn>=(maxx/2))
        cout<<"YES"<<"\n";
         else
        cout<<"NO"<<"\n";

    }
    return 0;
}