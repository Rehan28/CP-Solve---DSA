#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    int ans = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='R'){
            x++;
        }
        else{
            x--;
        }
        k--;
        if(x==0){
            ans++;
            break;
        }
    }
    //dbg(ans);
    if(ans==0){
        cout << ans << nl;
    }
    else{
        int xx = 0;
        for (int i = 0; i < n;i++){
            if(s[i]=='R'){
                x++;
            }
            else{
                x--;
            }
            k--;
            
            xx++;
            if(x==0){
                ans++;
                break;
            }
            if(k==0){
                break;
            }
        }
        if(ans==1){
            cout << ans << nl;
        }
        else{
            ans += (k / xx);
            cout << ans << nl;
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
