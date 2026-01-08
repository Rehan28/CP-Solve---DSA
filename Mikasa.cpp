#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

bool getBit(int n,int i){
    return (n & (1 << i));
}

void solve(int test) {
    int n, m;
    cin >> n >> m;

    if(m>=n){
        m++;
        int ans = 0;
        for (int i = 31; i > -1;i--){
            if(getBit(n, i)!=getBit(m,i)){
                if(getBit(n, i)){
                    break;
                }
                ans |= (1 << i);
            }
        }
        cout << ans << "\n";
    }
    else{//n==0 or m==0 or n>m
        cout << 0 << "\n";//n==0 and m==0 ar ta upore
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
