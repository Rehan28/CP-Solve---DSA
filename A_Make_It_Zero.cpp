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

    int c = 0;
    for(int i=0;i<n;i++){
       if(a[i]!=0) c++;
    }
    if(c){
        int xr = 0;
        for(int i=0;i<n;i++){
            xr ^= a[i];
        }

        if(xr==0){
            cout<<1<<nl;
            cout<<1<<" "<<n<<nl;
        }
        else{
            if(n%2){
                cout<<4<<nl;
                cout<<1<<" "<<n<<nl;
                cout<<1<<" "<<n-1<<nl;
                cout<<n-1<<" "<<n<<nl;
                cout<<n-1<<" "<<n<<nl;
            }
            else{
                cout<<2<<nl;
                cout<<1<<" "<<n<<nl;
                cout<<1<<" "<<n<<nl;
            }
            
        }
    }
    else{
        cout<<0<<nl;
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
