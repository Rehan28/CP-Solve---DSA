#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;



void solve(int test) {
    int n;
    cin>>n;

    vector<int> v[n+1];

    int ans[n];
    for (int i = 1; i < n;i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(i);
        v[b].push_back(i);
        ans[i] = -1;
        
    }

    pair<int,int> mx(0,0);

    for (int i = 1; i < n;i++){
        mx = max(mx, make_pair((int)v[i].size(), i));
    }

    int c = 0;
    for (int i = 0; i < v[mx.second].size();i++){
        ans[v[mx.second][i]] = c++;
    }

    for (int i = 1; i < n;i++){
        if(ans[i]==-1){
            ans[i] = c++;
        }
        cout << ans[i] << "\n";
    }
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
