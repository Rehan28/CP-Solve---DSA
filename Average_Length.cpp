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
    int nfac = 1;
    int x = n;
    for (int i = 1; i <= x;i++){
        nfac *= i;
    }
    x = n - 1;
    int fac = 1;
    for (int i = 1; i <= x;i++){
        fac *= i;
    }

    int num = nfac - fac;

    vector<pair<double, double>> vp;

    for (int i = 0; i < n;i++){
        double a, b;
        cin >> a >> b;

        vp.push_back(make_pair(a, b));
    }

    double total = 0;
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            double dis = ((vp[i].first - vp[j].first) * (vp[i].first - vp[j].first));
            dis += ((vp[i].second-vp[j].second)*(vp[i].second-vp[j].second));
            dis = sqrt(dis);
            total += (num * dis);
        }
    }

    double ans = total / (double)nfac;

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
