#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve(){
    ll n,m; cin>>n>>m;
    vector<ll>v(m);
    for(ll i=0; i<m; i++) cin>>v[i];
    map<ll,ll>mp;
    for(ll i=1; i<=n; i++) mp[i]=-1;
    ll mom=1;
    ll temp=n;
    for(ll i=0; i<m; i++){
       if(temp==0) break;
       if(mp.find(v[i])==mp.end()){
           mp[v[i]]=1;
           mp[temp]=mom;
           temp--;
       }
       mom++;
    }
    for(auto x: mp){
        if(x.first<=n) cout<<x.second<<" ";
    }

    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
