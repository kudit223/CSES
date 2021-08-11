Time limit: 1.00 s Memory limit: 512 MB
You are given n cubes in a certain order, and your task is to build towers using them. Whenever two cubes are one on top of the other, the upper cube must be smaller than the lower cube.

You must process the cubes in the given order. You can always either place the cube on top of an existing tower, or begin a new tower. What is the minimum possible number of towers?

Input

The first input line contains an integer n: the number of cubes.

The next line contains n integers k1,k2,…,kn: the sizes of the cubes.

Output

Print one integer: the minimum number of towers.

Constraints
1≤n≤2⋅105
1≤ki≤109
Example

Input:
5
3 8 2 1 5

Output:
2
  
  
  
  
  #include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())
main()
{

    // *****************************************Approach_1************************************************
//     ll n,countt=1; 
//     cin>>n;
//     vector<ll> v(n),p;
//     for(ll i=0;i<n;i++)
//     cin>>v[i];
//     p.push_back(v[0]);
//     for(ll i=1;i<n;i++)
//     {
//         for(ll j=0;j<countt;j++)
//         {
//             if(v[i]>=p[countt-1])
//             {
//             p.push_back(v[i]);
//             countt++;
//             break;
//             }
//             if(v[i]<p[j])
//             {
//             p[j]=v[i];
//             break;
//             }
//         }
//     }
   
    
// cout<<countt;


 // *****************************************Approach_2************************************************
ll n,k;
cin>>n;
multiset<ll> ms;
for(ll i=0;i<n;i++)
{
    cin>>k;
    auto it=ms.upper_bound(k);
    if(it==ms.end())
    ms.insert(k);

    else
    {
        ms.erase(it);
        ms.insert(k);
    }
}
cout<<ms.size();



    return 0;
}
