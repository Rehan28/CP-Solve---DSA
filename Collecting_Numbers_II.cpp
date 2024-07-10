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
    int n,m;
    cin>>n>>m;
    int a[n];
    cin(a,n);
    int mp[n+2];
    int pos[n+2];
    int ans = 1;
    for (int i = 1; i <= n;i++){
        mp[i] = a[i-1];
        pos[a[i - 1]] = i;
    }
    for (int i = 1; i < n;i++){
        if(pos[i]>pos[i+1]){
            ans++;
        }
    }
    pos[n + 1] = n + 1;
    while (m--){
        int x, y;
        cin >> x >> y;
        int val = mp[x];
        int val1 = mp[y];
        swap(mp[x], mp[y]);
        set<pair<int,int>> st;
        st.insert({val, val+1});
        st.insert({val-1, val});
        st.insert({val1, val1 + 1});
        st.insert({val1-1, val1});
        for(auto it : st){
            int xx = it.first;
            int yy = it.second;
            if(pos[xx]>pos[yy]){
                ans--;
            }
        }
        swap(pos[val], pos[val1]);
        for(auto it : st){
            int xx = it.first;
            int yy = it.second;
            if(pos[xx]>pos[yy]){
                ans++;
            }
        }
        cout << ans << "\n";
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
