#include<bits/stdc++.h>

using namespace std;

 vector<int>even_generator(vector<int>a)
{
    vector<int>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]%2==0)
        {
            b.push_back(a[i]);
        }
    }
    return b;
}

int main()
{
    vector<int>a= {1,2,3,4,5};
    vector<int>ans=even_generator(a);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

     return 0;

}

