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

    int one = 0;
    int zero = 0;
    int three = 0;
    int two = 0;
    int five = 0;
    int ans = 0;

    for (int i = 0; i < n;i++){
        //dbg(a[i]);
        ans++;
        if(a[i]==1){
            one++;
        }
        if(a[i]==0){
            zero++;
        }
        if(a[i]==3){
            three++;
        }
        if(a[i]==2){
            two++;
        }
        if(a[i]==5){
            five++;
        }
        if(one>=1 and zero>=3 and two>=2 and three>=1 and five>=1){
            break;
        }
        else if(i==n-1){
            ans = 0;
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
