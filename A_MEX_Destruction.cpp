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
    int a[n];
    cin(a,n);
    int c = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            c++;
        }
    }
    if(c==n){
        cout << 0 << "\n";
    }
    else{
        int x = -1;
        int y = -1;
        for (int i = 0; i < n;i++){
            if (a[i] != 0 and x == -1){
                x = i;
            }
            if(a[i]!=0){
                y = i;
            }
        }

        for (int i = x; i <= y;i++){
            if(a[i]==0){
                cout << 2 << "\n";
                return;
            }   
        }
        cout << 1 << "\n";
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
