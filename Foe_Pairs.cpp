#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;


void solve(int test) {
    int n, m;
    cin >> n >> m;

    int a[n];
    cin(a,n);

    int mp[n+1];
    int pos[n+1];

    for(int i = 0; i < n; i++) {
        mp[a[i]] = i+1;
        pos[a[i]] = 0;
    }

    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        if(mp[x]>mp[y]){
            pos[x] = max(pos[x], mp[y]);
        }
        else{
            pos[y] = max(pos[y], mp[x]);
        }
    }

    int x = 0;
    long long ans = 0;

    for(int i = 1; i <= n; i++) {
        if(pos[a[i-1]]>x){
            x = pos[a[i-1]];
        }
        //dbg(x);
        ans += 1LL*(i-x);
    }

    cout << ans << nl;

   
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
