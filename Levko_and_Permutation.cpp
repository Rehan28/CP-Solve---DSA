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
    int n,k;
    cin>>n>>k;
    int a[n+1];
    if(k>=n){
        cout << -1 << "\n";
    }
    else{
        for (int i = 1; i <= n;i++){
            a[i] = i;
        }
        int i = 1;
        k = n - k;
        if(k==1){
             for (int i = 1; i <= n;i++){
                cout << a[i] << " ";
            }
        }
        else{
            while(k){
            if(k==3){
                bool f = true;
                for (int j = i; j+2 <= n;j++){
                    if(j%2){
                        swap(a[i + 2], a[i + 1]);
                        swap(a[i], a[i + 1]);
                        f = false;
                        break;
                    }
                }
                if(f){
                    cout << -1 << "\n";
                    return;
                }
                    break;
                }
                else{
                    swap(a[i], a[i + 1]);
                    i += 2;
                    k -= 2;
                }
            }
            for (int i = 1; i <= n;i++){
                cout << a[i] << " ";
            }
        cout << "\n";
    }
}
        
    
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
