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
    int a[n];
    cin(a,n);

    for (int i = 0; i < n - 1;i++){
        int val = abs(a[i] - a[i + 1]);
        if(val<=1){
            cout << 0 << "\n";
            return;
        }
    }
    if(n==2){
        cout << -1 << "\n";
    }
    else{
        int mx[n];
        int mn[n];
        mx[0] = a[0];
        mn[0] = a[0];
        int mxp[n];
        mxp[0] = 0;
        int mnp[n];
        mnp[0] = 0;
        for (int i = 1; i < n;i++){
            if(mx[i-1]<=a[i]){
                mx[i] = a[i];
                mxp[i] = i;
            }
            else{
                mx[i] = mx[i-1];
                mxp[i] = mxp[i - 1];
            }

            if(mn[i-1]>=a[i]){
                mn[i] = a[i];
                mnp[i] = i;
            }
            else{
                mn[i] = mn[i-1];
                mnp[i] = mnp[i - 1];
            }
        }

        int mx1[n];
        int mn1[n];
        mx1[n-1] = a[n-1];
        mn1[n-1] = a[n-1];
        int mxp1[n];
       mxp1[n-1] = n - 1;
       int mnp1[n];

        mnp1[n-1]= n - 1;
       for (int i = n - 2; i > -1; i--)
       {
           if(mx1[i+1]<=a[i]){
                mx1[i] = a[i];
                mxp1[i] = i;
            }
            else{
                mx1[i] = mx1[i+1];
                mxp1[i] = mxp1[i + 1];
            }

            if(mn1[i+1]>=a[i]){
                mn1[i] = a[i];
                mnp1[i] = i;
            }
            else{
                mn1[i] = mn1[i+1];
                mnp1[i] = mnp1[i + 1];
            }
        }

        int ans = INT_MAX;
        for (int i = 2; i <= n-1;i++){
            if(mx[i-1]>=a[i] and mn[i-1]<=a[i]){
                int xx = min(mxp[i - 1], mnp[i - 1]);
                ans = min(ans, xx - i - 1);
            }
            
        }

        for (int i = 0; i <= n - 3;i++){
            if(mx1[i+1]>=a[i] and mn1[i+1]<=a[i]){
                int xx = max(mxp1[i + 1], mnp1[i + 1]);
                ans = min(ans, n - xx - 2);
            }
        }


        if(ans == INT_MAX){
            cout << -1 << "\n";
            return;
        }
        else{
            cout << ans << "\n";
            return;
        }
    }
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
