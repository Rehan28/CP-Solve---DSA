#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a,n);

    int ans = INT_MAX;
    int lo = 0;
    int hi = n;
	while (lo < hi) {
		int mid = lo + (hi - lo + 1) / 2;

        vector<int> v;

        for(int i=0;i<n;i++){
            v.push_back(a[i]+((i+1)*mid));
        }
        sort(v.begin(),v.end());
        int sum = 0;
        for(int i=0;i<mid;i++){
            sum+=v[i];
        }
        if (sum<=k) {
			lo = mid;
		} else {
			hi = mid - 1;
		}
	}


        vector<int> v;

        for(int i=0;i<n;i++){
            v.push_back(a[i]+((i+1)*lo));
        }
        sort(v.begin(),v.end());
        int sum = 0;
        for(int i=0;i<lo;i++){
            sum+=v[i];
        }
    cout<<lo<<" "<<sum<<nl;
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
