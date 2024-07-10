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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    int x = a[k - 1];
    int f = 0, s = n-1;
    for (int i = 0; i < n;i++){
        if(f==0 and a[i]>x){
            f = i;
            dbg(i);
        }
        else if(f!=0 and s==0 and a[i]>x){
            s = i;
        }
    }
    int ans = f-1;
    ans = max(ans, (s - f) + 1);
    cout << ans << "\n";
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
