#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll x,y,s=1;    // y->row x->coloum
        cin>>y>>x;
        if(x==1&&y==1)
        cout<<x;
        else{
            ll m=max(y,x);
          
            s=m*m-(m-1);
            if(x==y)
            cout<<s;
          else  if(m%2==0)
            {
                if(m==y)
                s=s+(y-x);
                
                else
                s=s-(x-y);
                cout<<s;
            }
           
            else
            {
                if(m==y)
                s=s-(y-x);
                
                else
                s=s+(x-y);
                cout<<s;
            }

        }
        cout<<"\n";

    }

}
