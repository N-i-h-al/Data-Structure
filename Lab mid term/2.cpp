#include <bits/stdc++.h>
using namespace std;

vector<int>merge_sort(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    vector<int>sorted_a;
    int idx1=0;
    int idx2=0;
    for(int i=0; i<a.size(); i++)
    {
        if(idx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_b.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }

        else if(sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
void dd(int arr[], int n)
{
    vector<int>ab;
    for(int i=0;i<n;i++)
    {
        ab.push_back(arr[i]);
    }

    vector<int>ans=merge_sort(ab);

    int x = 0;
    int y = x;
    for(++x; x < n; ++x)
    {
        if (!(ans[y] == ans[x]) && !(++y == x))
        {
            ans[y] = ans[x];
        }
    }
    ++y;
    for (int x=0; x<y; x++)
    {
        cout<<ans[x]<<" ";
    }
}

int main()
{
    int n,x,i,j;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    dd(a, n);
    return 0;
}
