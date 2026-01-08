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
    cout << "Case #" << test << ": ";
    int n;
    cin>>n;
    vector<pair<double, double>> vp;
    double hi = -1.0;
    double lo = 1000000.023;
    for (int i = 0; i < n;i++){
        double x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
        double time = (i + 1) / y;
        hi = max(hi, time);
        lo = min(lo, time);
    }
    
    
    while (hi-lo>0.0000001) {
		double mid = lo + (hi - lo) / 2.0;
        //dbg(mid);
        bool f = true;
        for (int i = 1; i <= n;i++){
            double time = (double)i / mid;
            //dbg(time);
            if(time<vp[i-1].first or time>vp[i-1].second){
                f = false;
                break;
            }
        }
        if (f) {
			hi = mid;
		} else {
			lo = mid + 0.000001;
		}
	}
    bool ff = true;
    for (int i = 1; i <= n;i++){
        double time = (double)i / lo;
        //dbg(time);
        if(time<vp[i-1].first or time>vp[i-1].second){
            //dbg(i);
            cout << -1 << "\n";
            return;
        }
    }   
    cout << lo << "\n";
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