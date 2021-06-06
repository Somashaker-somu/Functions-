#include<bits/stdc++.h>
using namespace std;
int prime(int n,int i)
{
    if(n%i==0)
    {
        return 0;
    }
    if(i<=sqrt(n))
    {
    return(prime(n,i++));
    }
    return 1;
}
int main()
{
    int n,i;
    cout<<"enter a number:";
    cin>>n;
    if(prime(n,2)!=0)
    {
    cout<<"prime";
    }
    else
    cout<<"not prime";
    return 0;
}
