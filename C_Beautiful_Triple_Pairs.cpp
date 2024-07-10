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

ll value(map<pair<ll, ll>, vector<ll>> mp){
    ll ans = 0;
    for(auto it : mp){
        map<ll, ll> val;
        int x = it.first.first;
        int y = it.first.second;
        for(auto i : mp[{x,y}]){
            val[i]++;
        }
        if(val.size()>1){
            vector<ll> v;
            
            for(auto i:val){
                v.push_back(i.second);
            }
            int n = v.size();
            ll pfx[n + 1];
            pfx[0] = v[0];
            for (int i = 1; i < n;i++){
                pfx[i] = pfx[i - 1] + v[i];
            }
            for (int i = n - 1; i > 0;i--){
                ans += (pfx[i - 1] * v[i]);
            }
        }
        
    }
    return ans;
}

void solve(int test) {
    int n;
    cin>>n;
    ll a[n];
    cin(a,n);
    map<pair<ll, ll>, vector<ll>> mp;
    map<pair<ll, ll>, vector<ll>> mp1;
    map<pair<ll, ll>, vector<ll>> mp2;
    for (int i = 0; i < n - 2;i++){
        mp[{a[i], a[i + 1]}].push_back(a[i + 2]);
        mp1[{a[i], a[i + 2]}].push_back(a[i + 1]);
        mp2[{a[i+1], a[i + 2]}].push_back(a[i]);
    }
    ll ans = value(mp);
    ans += value(mp1);
    ans += value(mp2);
    cout << ans << "\n";
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
