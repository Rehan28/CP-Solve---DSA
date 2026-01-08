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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for (int i = 0; i < n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    int mx = b[0];
    int mn = a[0];
    int ans = c[0];
    int last_mn = c[0];
    int last_mx = c[0];
    for (int i = 0; i < n;i++){
        if(a[i]<=mn and b[i]>=mx){
            ans = min(ans, c[i]);
            if(a[i]<mn or b[i]>mx){
                last_mn = ans;
                last_mx = ans;
            }
        }
        else if()
    }
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
