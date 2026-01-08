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
    cin(a,n);
    if(a[n-1]==0){
        for (int i = 1;i<=n+1;i++){
            cout << i << " ";
        }
        cout << "\n";
    }
    else if(a[0]==1){
        cout << n + 1 << " ";
        for (int i = 1; i <= n;i++){
            cout << i << " ";
        }
        cout << "\n";
    }
    else{
        for (int i = 0; i < n-1;i++){
            if(a[i]==0 and a[i+1]==1){
                for (int j = 1; j <= i+1;j++){
                    cout << j << " ";
                }
                cout << n + 1 << " ";
                for (int j = i + 2; j <= n;j++){
                    cout << j << " ";
                }
                cout << "\n";
                return ;
            }
        }
        cout << -1 << "\n";
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
