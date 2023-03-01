#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    //O(logn) for insert
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

    //O(logn) for delete
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
            if (r < nodes.size() && nodes[r] > nodes[largest])
            {
                largest = r;
            }

            if(largest==idx)
                break;
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }

    }
};

int main()
{
    MaxHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);

    heap.PrintHeap();

    return 0;
}
