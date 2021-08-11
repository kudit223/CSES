Time limit: 1.00 s Memory limit: 512 MB
You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.

What is the longest sequence of successive songs where each song is unique?

Input

The first input line contains an integer n: the number of songs.

The next line has n integers k1,k2,…,kn: the id number of each song.

Output

Print the length of the longest sequence of unique songs.

Constraints
1≤n≤2⋅105
1≤ki≤109
Example

Input:
8
1 2 1 3 2 7 4 2

Output:
5



#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define mod 1000000007
#define sort(a) sort(a.begin(),a.end())
main()
{
    // *****************************************************Approach_1************************************************
    // ll n,k,best=0,p;
    // cin>>n;
    // vector<ll> s;
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>k;
    //     auto it=find(s.begin(),s.end(),k);
    //     if(it==s.end())
    //     {
    //     s.push_back(k);
        
    //     p=s.size();
    //     best=max(best,p);
    //     }
    //     else
    //     {
    //         it++;
    //         s.erase(s.begin(),it);
    //         s.push_back(k);   
    //     }
        
    // }
    // cout<<best;
    
    // *****************************************************Approach_2************************************************
    ll n,i=0,j=0,c=0;
    cin>>n;
    vector<ll> v(n);
    set<ll> s;
    for(ll i=0;i<n;i++)
     cin>>v[i];
    
    while (j<n)
    {
        if(!s.count(v[j]))
        {
            s.insert(v[j]);
            c=max(c,j-i+1);
            j++;
        }
        while (s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }      
    }
    cout<<c;
   return 0;

}
    
