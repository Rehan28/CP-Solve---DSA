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
    string s;
    cin >> s;

    string ss = s;
    sort(ss.begin(), ss.end());

    char mn = ss[0];
    char mx = ss[n -1];

    ss = s;
    reverse(ss.begin(), ss.end());

    if(ss>s){
        cout << "YES\n";
        return;
    }

    if(k==0){
        cout << "NO\n";
        return;
    }
    string ss1 = s;
    for (int i = n-1; i > 0;i--){
        if(ss1[i]==mn){
            swap(ss1[0], ss1[i]);
            break;
        }
    }
    ss = ss1;
    reverse(ss.begin(), ss.end());
    if(ss>ss1){
        cout << "YES\n";
        return;
    }

    ss = s;
    
    for (int i = 0; i < n-1;i++){
        if(ss[i]==mx){
            swap(ss[n-1], ss[i]);
            break;
        }
    }
    reverse(ss.begin(), ss.end());
   
    if(ss>s){
        //(ss);
        cout << "YES\n";
        return;
    }
    cout<<"NO\n";
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