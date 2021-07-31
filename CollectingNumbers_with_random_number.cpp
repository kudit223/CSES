Time limit: 1.00 s Memory limit: 512 MB
You are given an array that contains n numbers exactly once. Your task is to collect the numbers from  increasing order.

On each round, you go through the array from left to right and collect as many numbers as possible. What will be the total number of rounds?

Input

The first line has an integer n: the array size.

The next line has n integers x1,x2,…,xn: the numbers in the array.

Output

Print one integer: the number of rounds.

Constraints
1≤n≤2⋅105
Example

Input:
5
4 2 1 5 3

Output:
3
  
Input:
5
1 10 3 7 4

Output:
3




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sort(a) sort(a.begin(),a.end())
int main()
{
  ll n,c=0,result=0;
  cin>>n;  
vector<ll> v(n),p(n);

for(ll i=0;i<n;i++)
cin>>v[i];

p=v;
sort(p);
while(n--)
{
  for(ll j=0;j<v.size();j++)
  {
    if(p[c]==v[j])
    c++;

  }
  result++;
  if(c==p.size())
  break;
}
cout<<result;



     return 0;


}
