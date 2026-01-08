#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        int x = i;
        int val = 0;
        for (int j = 0; j <n-i;j++){
            if(a[x][j]<0){
                val = min(val, a[x][j]);
            }
            x++;
        }
        ans += abs(val);
    }
   
    for (int i = 0; i < n-1;i++){
        int x = 0;
        int val = 0;
        for (int j = i+1; j < n;j++){
            //cout << a[x][j] << " ";
            if(a[x][j]<0){
                val = min(val, a[x][j]);
            }
            x++;
        }
        //dbg(val);
        ans += abs(val);
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
