#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    map<int,int> ff;
    map<int,int> ff1;
    int sum =0;
    vector<int> v;
    for(auto x:mp){
        ff[x.second] += x.second;
        ff1[x.second]++;// atogula set ache
    }
    int ans=1e9;
    for(auto x : ff){
        v.push_back(x.first);
        // dis
    }
    for (int i = 0; i < v.size();i++){
        int val = ff[v[i]];
        int less = v[i];
        for (int j = i + 1; j < v.size();j++){
            val += (ff1[v[j]] * less);
        }
        val = (n - val);
        ans = min(ans, val);
    }
    cout << ans << '\n';
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}