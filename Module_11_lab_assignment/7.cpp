#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b,y;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>a;
    cin>>b;
    for(int i=0; i<n;i++)
    {
       if(i<a-1 || i>b-1)
       {
           cout<<arr[i]<<" ";
       }
    }
    return 0;
}
