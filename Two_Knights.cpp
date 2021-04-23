#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)                                   
    {                                                          
        ll q=i*i;
      cout<<  q*(q-1)/2-(i-1)*(i-2)*4<<"\n";

    }
    return 0;
    

}
