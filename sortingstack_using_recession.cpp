#include<bits/stdc++.h>
using namespace std;

void insertt(stack<int> &s,int k)
{
    if(s.size()==0||s.top()<=k)
    {
        s.push(k);
        return ;
    }
    int p=s.top();
    s.pop();
    insertt(s,k);
    s.push(p);
}
void sortt(stack<int> &s)
{
    if(s.size()==1)
    return ;
    int k=s.top();
    s.pop();
    sortt(s);
    insertt(s,k);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(9);
    s.push(2);
    s.push(6);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(0);
    sortt(s);
    // cout<<s.empty();
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        
    }
    
}
