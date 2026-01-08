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

int f(int x,int y){
    cout << "? " << x << " " << y << "\n";
    fflush(stdout);
    int r;
    cin >> r;
    return r;
}

void solve(int test) {
    int n;
    cin>>n;
    int par[n + 1];
    for (int i = 2; i <= n;i++){
        int last = 1;
        while(1){
            int x = f(i, last);
            if(x==i){
                break;
            }
            last = x;
        }
        par[i] = last;
    }
    cout << "! ";
    for (int i = 2; i <= n;i++){
        cout << par[i]<<" "<<i << " ";
    }
    cout << "\n";
    fflush(stdout);
}
int main() {
    //Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
