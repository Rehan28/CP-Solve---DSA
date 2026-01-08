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
    int a[n][m];
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    //dbg(mx);
    int valn[n];
    int k = 0;
    for(int i = 0; i < n; i++) {
        valn[i] = 0;
        for(int j = 0; j < m; j++) {
            if(a[i][j] == mx) {
                valn[i]++;
                k++;
            }
        }
    }

    int valm[m];
    for(int i = 0; i < m; i++) {
        valm[i] = 0;
        for(int j = 0; j < n; j++) {
            if(a[j][i] == mx) {
                valm[i]++;
                
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int sum = valn[i] + valm[j];
            if(a[i][j] == mx) {
                sum--;
            }
            if(sum==k){
                cout<< mx-1 << nl;
                return;
            }
        }
    }

    cout << mx << nl;
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
