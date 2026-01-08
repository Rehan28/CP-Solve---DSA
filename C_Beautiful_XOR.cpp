#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int a, b;
    cin >> a >> b;

    int last = 0;
    int last1 = 0;
    for (int i = 0;i < 31;i++) {
        if (((a >> i) & 1)) {
            last = i;
        }
    }

    for (int i = 0;i < 31;i++) {
        if (((b >> i) & 1)) {
            last1 = i;
        }
    }

    if(last<last1){
        cout<<-1<<nl;
    }
    else{

        if(a==b){
            cout<<0<<nl;
            return;
        }
        int ans = 0;
        for(int i=0;i<=last;i++){
            if(((b>>i)&1) and !((a>>i)&1)){
                ans = ans | (1 << i);
            }
        }
        a = a ^ ans;
        int ans1 = 0;
        for(int i=0;i<=last;i++){
            if(!((b>>i)&1) and ((a>>i)&1)){
                ans1 = ans1 | (1 << i);
            }


        }
        a ^= ans1;

        if(ans!=0 and ans1==0){
            cout<<1<<nl;
            cout << ans << "\n";
        }
        else if(ans==0 and ans1!=0){
            cout<<1<<nl;
            cout << ans1 << "\n";
        }
        else{
            cout<<2<<nl;
            a = a^ans1;
            cout << ans << " " << ans1 << "\n";
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
