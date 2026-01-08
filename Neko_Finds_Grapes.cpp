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
    int n,m;
    cin >> n >> m;
    int a[n];
    cin(a,n);
    int b[m];
    cin(b, m);
    int odd = 0, odd1 = 0;
    int even = 0, even1 = 0;
    for (int i = 0; i < n;i++){
        if(a[i]%2){
            odd++;
        }else{
            even++;
        }
    } 
    for (int i = 0; i < m;i++){
        if(b[i]%2){
            odd1++;
        }else{
            even1++;
        }
    }
    cout << min(odd, even1) + min(odd1, even) << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
