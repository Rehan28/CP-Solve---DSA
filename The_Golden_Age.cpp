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
#define int long long

bool overflow;
int f(int x,int p){
    __int128 ans = 1;
    for (int i = 0; i < p;i++){
        ans *= x;
        if(ans>1e18){
            overflow = true;
            return -1;
        }
    }
    return ans;
}

void solve(int test) {
    int x,y,l,r;
    cin >> x >> y >> l >> r;
    //dbg(r);

    vector<int> v;
    for (int i = 0; i < 60;i++){
        for (int j = 0; j < 60;j++){
            overflow = false;
            int xp = f(x, i);
            int yp = f(y, j);
            if(__int128(xp)+__int128(yp)>1e18){
                overflow = true;
            }
            if(!overflow and xp+yp>=l and xp+yp<=r){
                v.push_back(xp+yp);
            }
        }
    }
    sort(v.begin(), v.end());
    int ans =v[0] - l;
    for (int i = 1; i < v.size();i++){
        ans = max(ans, v[i] - v[i - 1]-1);
    }
    ans = max(ans, r - v[v.size() - 1]);
    cout << ans << "\n";
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
