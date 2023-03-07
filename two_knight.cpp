#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll sum=4*(n-2)*(n-1);
        cout<<sum<<"\n";
    }
    return 0;
}
