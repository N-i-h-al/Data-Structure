#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    //O(logn)
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    //O(logn)
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    //O(n)
    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    //O(logn)
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest==idx)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }

    }

    //O(n)
    void build_from_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 - 1;
        for(int i=last_non_leaf; i>=0; i--)
        {
            down_heapify(i);
        }
    }
};

int main()
{
    MaxHeap h;
    vector<int>a = {1,2,3,4,10,9,8,7};
    h.build_from_array(a);
    h.PrintHeap();

    cout<<"\n";

    return 0;
}


