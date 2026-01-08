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
    string s;
    cin >> s;
    bool f = false;
    if(s[0]=='1'){
        f = true;
    }
    if(s[n-1]=='1'){
        f = true;
    }
   
    for (int i = 0; i < n-1;i++){
        if(s[i]=='1' and s[i+1]=='1'){
            f = true;
            break;
        }
    }
    if(f){
        yes;
    }
    else{
        no;
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
