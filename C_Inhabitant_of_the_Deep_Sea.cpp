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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    int ans = 0;
    int i = 0;
    int j = n - 1;
    while(k>0 and i<=j){
        if(i==j){
            if(a[i]<=k){
                ans++;
            }
            break;
        }

        int x = min(a[i], a[j]);
        int val = 2 * x;
        if(k>=val){
            a[i] -= x;
            a[j] -= x;
            k -= val;
        }
        else if(k==(val-1)){
            a[i] -= x;
            a[j] -= (x - 1);
            k -= val-1;
        }
        else{
            k -= val;
        }
        if(a[i]<=0){
            
            ans++;
            i++;
        }
        if(a[j]<=0){
            ans++;
            j--;
        }
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
