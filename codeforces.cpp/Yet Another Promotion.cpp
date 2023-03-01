#include <bits/stdc++.h>
using namespace std;

long long int t, a, b, n, m;

int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b >> n >> m;
       long long  int ans=0;
        long long int y;

        long long int cost1 = (n / (m + 1));
        long long int cost2 = n%(m+1);
        if(n%(m+1)==0)
        {
            y=cost1*a*m;
        }
        else
        {
             y=cost1*a*m;
             y+=(min(cost2*b, cost2*a));
        }
        long long int z=min(n*a,n*b);
        cout<<min(z,y)<<endl;
    }
    return 0;
}

