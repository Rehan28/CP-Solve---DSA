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

void solve(int test) {
    int p,t;
    cin>>p>>t;
    int n = p + t+1;
    p--;
    t--;
    int inf = LONG_LONG_MAX;
    int inf1 = LONG_LONG_MIN;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);
    vector<pair<pair<int,int>, int>> vp;
    for (int i = 0; i < n;i++){
        int x = a[i] - b[i];
        if(x>=0){
            x = inf;
            inf--;
        }
        else{
            x = inf1;
            inf1++;
        }
        vp.push_back(make_pair(make_pair(x,a[i]), i));
    }
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());
    int pfxa[n];
    int pfxb[n];
    pfxa[0] = a[vp[0].second];
    pfxb[0] = b[vp[0].second];
    for (int i = 1; i < n;i++){
        int x = vp[i].second;
        pfxa[i] = pfxa[i - 1] + a[x];
        pfxb[i] = pfxb[i - 1] + b[x];
    }
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        int x = vp[i].second;
        mp[x] = i;
    }
    for (int i = 0; i < n;i++){
        int now = mp[i];
        if(now>p){
            int ans = 0;
            if(p>-1){
              ans = pfxa[p];
              ans += (pfxb[n - 1] - pfxb[p]);
            }
            else{
                ans += pfxb[n - 1];
            }
            if(now!=0){
                ans -= (pfxb[now] - pfxb[now - 1]);
            }
            else{
                ans -= pfxb[now];
            }
            cout << ans << " ";
        }
        else{
            int ans = 0;
            if(p>-1){
                int x = pfxa[now];
                if(now>0){
                    x = pfxa[now] - pfxa[now - 1];
                }
                ans = pfxa[p + 1] - x;

                ans += (pfxb[n - 1] - pfxb[p + 1]);
            }
            cout << ans << " ";
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
