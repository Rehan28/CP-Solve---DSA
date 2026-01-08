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

    vector<int> v[n + 1];

    for(int i=0;i<n;i++){
        v[a[i]].push_back(i+1);
    }

    int dis[n + 1];

    for(int i=1;i<=n;i++){
        int last = 0;
        dis[i] = -1;
        for (int j = 0;j<v[i].size();j++){
            dis[i] = max(v[i][j]-last, dis[i]);
            if(j!=v[i].size()-1){
                dis[i] = max(dis[i], v[i][j + 1] - v[i][j]);
                
            }
            else{
                dis[i] = max(dis[i], n - v[i][j] + 1);
            }
            last = v[i][j];
        }

    }

    map<int, int> mp;

    for (int i = 1; i <= n;i++){
        if(dis[i]!=-1){
            mp[dis[i]] = INT_MAX;
        }
    }

    for (int i = 1; i <= n;i++){
        if(dis[i]!=-1){
            mp[dis[i]] = min(mp[dis[i]], i);
        }
    }

    int ans = INT_MAX;
    for (int i = 1; i <= n;i++){
        if(mp[i]!=0 or ans!=INT_MAX){
            if(mp[i]==0){
                mp[i] = INT_MAX;
            }
            ans = min(ans, mp[i]);
            cout<<ans<<" ";
        }
        else{
            cout << -1 << " ";
        }
    }
    cout << "\n";
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

