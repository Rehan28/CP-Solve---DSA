#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;

    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);

    int c = 0;
    int val = 0;
    for (int i = 0; i < n;i++){
        if(b[i]==-1){
            c++;
        }
        else{
            val = a[i] + b[i];
        }
    }
    //dbg(c);
    if(c==n){
        sort(a, a+n);
        int v = a[n - 1] - a[0] + 1;
        v = k - v;
        cout << v + 2 << "\n";
    }
    else{
        for (int i = 0; i < n;i++){
            int x = val-a[i];
            if((b[i]!=-1 and a[i]+b[i]!=val)){
                cout << 0 << "\n";
                return;
            }
            else if(b[i]==-1 and (x<0 or x>k)){
                cout << 0 << "\n";
                return;
            }
        }
        cout<< 1 << "\n";
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
