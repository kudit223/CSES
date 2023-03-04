#include<bits/stdc++.h>
using namespace std;

int diff(vector<int>v,int n)
{
    int sum1=0,sum,p;
    for(int i=0;i<n;i++)
    sum1+=v[i];
    sum=sum1/2;
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    for(int j=0;j<sum+1;j++)
    {
        if(i==0)
        dp[i][j]=false;
        if(j==0)
        dp[i][j]=true;
    }
    for(int i=1;i<n+1;i++)
    for(int j=1;j<sum+1;j++)
    {
        if(v[i-1]>j)
        dp[i][j]=dp[i-1][j];
        else
        dp[i][j]=(dp[i-1][j]||dp[i-1][j-v[i-1]]);
    }
    for(int i=sum;i>=0;i--)
    if(dp[n][i]==1)
    {
        p=i;
        break;
    }
    return (sum1-2*p);
}

int main()
{
	int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
   cout<< diff(v,n);
}
