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
    int n,x;
    cin >> n >> x;
    int a[n];
    cin(a,n);
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }
    if(sum%x){
        cout << n << "\n";
    }
    else{
        int c = 0;
        sum = 0;
        for (int i = 0; i < n;i++){
            c++;
            sum += a[i];
            if(sum%x){
                break;
            }
        }
        int c1 = 0;
        sum = 0;
        for (int i = n-1; i>-1;i--){
            c1++;
            sum += a[i];
            if(sum%x){
                break;
            }
        }
        c = min(c, c1);
        if(c==n){
            cout << -1 << "\n";
        }
        else{
             cout << n - c << "\n";
        }
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
