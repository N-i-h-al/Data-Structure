#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    int getMax()
    {
        return nodes[0];
    }

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

    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
};

class MinHeap
{
public:
    MaxHeap mx;

    void insert(int x)
    {
        mx.insert(-x);
    }

    void Delete(int idx)
    {
        mx.Delete(idx);
    }

    int getMin()
    {
        int Max= mx.getMax();
        int Min = (-1) * Max;
        return Min;
    }
};

int main()
{
    MinHeap Min;
    Min.insert(7);
    Min.insert(3);
    Min.insert(5);
    cout << Min.getMin() << endl;
    Min.Delete(0);
    cout <<Min.getMin() << endl;
    Min.Delete(0);
    cout << Min.getMin() << endl;
    return 0;
}

