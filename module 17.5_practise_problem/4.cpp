#include<bits/stdc++.h>
using namespace std;

int fibo (int c)
{
    if(c<=1)
    {
        return c;
    }
    int b=fibo(c-2);
    int d=fibo(c-1);
    return b+d;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<" ";
    return 0;
}
