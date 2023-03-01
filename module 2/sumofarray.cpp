#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int x[4];
    for(int i=0; i<4; i++)
        cin>>x[i];
    for(int i=0; i<4; i++)
        sum=sum+x[i];
    cout<<sum<<" ";
    return 0;
}
