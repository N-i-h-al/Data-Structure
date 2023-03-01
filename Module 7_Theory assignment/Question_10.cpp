#include<iostream>
using namespace std;

void func()
{
    int* p = new int[2];
    *p=33;
    cout<<*p;
    delete p;
    return ;
}

int main()
{
      func();
}

