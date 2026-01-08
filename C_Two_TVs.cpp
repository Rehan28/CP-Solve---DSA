#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;

    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        mp[x]++;
        mp[y+1]--;
    }

    vector<int> v;
    v.push_back(0);
    for(auto it: mp){
        v.push_back(it.second);
        //dbg(it.first);
        //dbg(it.second);
    }
    for(int i=1;i<v.size();i++){
        v[i] += v[i-1];
        if(v[i]>2){
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
