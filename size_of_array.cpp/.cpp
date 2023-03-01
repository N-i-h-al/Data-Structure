#include<iostream>
#include<array>
using namespace std;
int main()
{  //Given array
   array<int,5>arr{ 1, 2, 3, 4, 5 };
   //Using the size() function from STL
   cout<<"\nThe length of the given Array is: "<<arr.size();
   return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{  //Given array
   vector<int>arr{ 1, 2, 3, 4, 5 };
   //Using the size() function from STL
   cout<<"\nThe length of the given Array is: "<<arr.size();
   return 0;
}
