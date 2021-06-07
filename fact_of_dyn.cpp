#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int d[100005];
int fact(int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(n>1)
    {
        return d[n]=n*fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=-1;i<n;i++)
    {
        d[i]=-1;
    }
    cout<<fact(n)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }
}
