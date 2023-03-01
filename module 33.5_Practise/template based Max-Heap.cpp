#include <bits/stdc++.h>
using namespace std;

template<class T>
class MaxHeap
{
public:
    vector<T>nodes;

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
    void insert(T x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
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

    T getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

};


int main()
{
    MaxHeap<int>heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);

    heap.PrintHeap();

    MaxHeap<char>heap1;
    heap1.insert('n'); // char insert er jnne ' ' (single cotation dite hbe)
    heap1.insert('m'); // string insert er jnne " " (doublele cotation dite hbe)
    heap1.insert('p');

    heap1.PrintHeap();

    MaxHeap<double>heap2;
    heap2.insert(4.30);
    heap2.insert(7.45);
    heap2.insert(9.33);
    heap2.insert(1.67);
    heap2.insert(10);

    heap2.PrintHeap();

    cout<<"Max element = "<<heap.getMax()<<"\n";
    cout<<"Max element = "<<heap1.getMax()<<"\n";
    cout<<"Maax element = "<<heap2.getMax()<<"\n";

    return 0;
}


