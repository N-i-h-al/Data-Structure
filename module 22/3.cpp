#include<bits/stdc++.h>
using namespace std;

void deleteZero(list<int>& nums)
{
    for (auto it = nums.begin(); it != nums.end();)
    {
        if (*it == 0)
        {
            it = nums.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

int main()
{
    list<int> nums = {0, 2, 0, 0, 5};
    deleteZero(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
