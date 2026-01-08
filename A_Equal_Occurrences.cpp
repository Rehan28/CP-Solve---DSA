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
    int a[n];
    cin(a,n);
    set<int> s;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        mp[a[i]]++;
    }

    vector<int> v;

    for(auto x : s){
        v.push_back(mp[x]);
    }

    int ans = 0;
    for (int i = 0; i < v.size();i++){
        int sum = 0;
        for (int j = 0;j<v.size();j++){
            if(v[j]>=v[i]){
                sum += v[i];
            }
        }
        //dbg(sum);
        ans = max(ans, sum);    
    }
    cout<<ans<<nl;
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
