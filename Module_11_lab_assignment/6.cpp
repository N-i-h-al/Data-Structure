# include <bits/stdc++.h>
using namespace std;

int B_S(int a[],int n,int k,bool found)
{
    int low=0, high=n-1,result=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            result=mid;
            if(found)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        else if(a[mid]>k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return result;
}

int main()
{
    int x,p,c=0;
    cin>>x;
    int b[x];
    for(int i=0; i<x; i++)
    {
        cin>>b[i];
    }
    cin>>p;
    int first=B_S(b,x,p,true);
    if(first==-1)
    {
        cout<<"No";
    }
    else
    {
        int last=B_S(b,x,p,false);
        {
            c=last-first+1;
        }
    }
    if(c!=0)
    {
        if(c>1)
            cout<<"Yes";
        else
        {
            cout<<"No";
        }
    }
    return 0;
}
