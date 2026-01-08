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
    int a[n+1];

    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }

    int i = 0;
    int j = 1;
    int one = 0;
    int zero = 0;
    int ans = 0;
    int l = 0;
    int r = 0;
    int t = 2;

    while(j<=n){

        if(a[j]==1){
            one++;
        }
        else{
            zero++;
        }

        while(zero>k){
            if(a[i+1]==0){
                zero--;
            }
            else{
                one--;
            }
            i++;
        } 
        int x = j - i;
        if(x>ans){
            ans = x;
            l = i + 1;
            r = j;
        }
        j++;
    }

    cout<< ans << nl;
    for (int i = 1;i<= n;i++){
        if(i>=l and i<=r){
            cout << 1 << " ";
        }
        else{
            cout << a[i] << " ";
        }
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
