#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    int a[n];
    cin(a,n);
    int r[n];
    cin(r, n);

    map<int, int> mp;

    for (int i = 0; i < n;i++){
        int minx = a[i] - r[i];
        int maxx = a[i] + r[i];
        int rad = r[i] * r[i];

        for (int j = minx; j <= maxx;j++){
            int dis = abs(j - a[i]);
            dis *= dis;
            int val = sqrt(rad - dis);
            int t = 2 * val + 1;
            if(mp[j]!=0 and mp[j]<t){
                mp[j] = t;
            }
            else if(mp[j]==0){
                mp[j] = t;
            }
        }
    }
    int sum = 0;
    for(auto x : mp){
        sum += x.second;
        //cout <<x.first<<" "<< x.second << "\n";
    }

    cout << sum << "\n";
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
