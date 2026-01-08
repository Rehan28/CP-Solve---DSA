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
    int front[n];
    int x = INT_MAX;
    for (int i = n - 1; i > -1;i--){
        if(a[i]==0){
            x = i;
        }
        front[i] = x-i;
    }
    int back[n];
    x = INT_MAX;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            x = i;
        }
        back[i] = abs(i - x);
        
    }
    for (int i = 0; i < n;i++){
        cout << min(front[i], back[i]) << " ";
    }
    cout << "\n";
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
