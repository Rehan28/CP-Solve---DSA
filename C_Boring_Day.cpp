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
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    cin(a,n);
    int ans = 0;
    int pfx[n+1];
    pfx[0] = 0;
    pfx[1] = a[0];
    for (int i = 1; i < n;i++){
        pfx[i+1] = pfx[i] + a[i];
    }
    int i = 0;
    int j = 0;
    while (i<n and j<n){
        int sum = 0;
        if(i==j){
            sum = pfx[i + 1] - pfx[i];
        }
        else{
            sum = pfx[j + 1] - pfx[i];
        }
        //cout << i << " " << j << " " << sum << "\n";
        if(sum>=l and sum<=r){
            ans++;
            j++;
            i = j;
        }
        else if(sum>r and i<j){
            i++;
        }
        else if(sum>r){
            i++;
            j++;
        }
        else if(sum<l){
            j++;
        }
        //dbg(ans);
    }
    cout << ans << "\n";
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
