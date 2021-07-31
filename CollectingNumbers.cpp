


Time limit: 1.00 s Memory limit: 512 MB
You are given an array that contains each number between 1…n exactly once. Your task is to collect the numbers from 1 to n in increasing order.

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
