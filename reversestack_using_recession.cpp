#include<bits/stdc++.h>
using namespace std;

void first(stack<int> &s,int k)
{
    if(s.size()==0)
    {
        s.push(k);
        return ;
    }
    int p=s.top();
    s.pop();
    first(s,k);
    s.push(p);
}

void reversestack(stack<int> &s)
{
    if(s.size()==1)
    return;
    int k=s.top();
    s.pop();
    reversestack(s);
    first(s,k);
}


int main()
{
    stack<int> s;
    s.push(10);
    s.push(1);
    s.push(9);
    s.push(2);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(0);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    s.push(10);
    s.push(1);
    s.push(9);
    s.push(2);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(0);
    cout<<"\n";
    reversestack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
