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
    cin>>a[0];
    int mx=1,k=1;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
          k++;  
        } 
        else{
           k=1; 
        } 
        if(k>mx){
            mx=k;
        } 
    }
    cout << mx << "\n";
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
