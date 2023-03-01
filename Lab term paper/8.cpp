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
        mx.Delete(mx.getIdx(-idx));
    }
    int getMin()
    {
        int Max = mx.getMax();
        int Min=(-1)*Max;
        return Min;
    }
};

