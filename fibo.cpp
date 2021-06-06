#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;

    }
    return(fib(n-1)+fib(n-2));
}
int main()
{

    int n,i,fib;
    cout<<"enter the 'n' of elements :";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        //f=fibo(c);
        cout<<fib(i);
    }

    return 0;
}
