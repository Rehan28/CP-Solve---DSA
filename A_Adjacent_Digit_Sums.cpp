#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int a, b;
    cin >> a >> b;
    
    if((b==a+1)){
        cout << "YES\n";
    }
    else if(b<a){
        int t = 1000;
        int sum = 0;
        string s = to_string(b);

        for (int i = 0; i < s.size();i++){
            sum += (s[i] - '0');
        }
        sum--;
        //dbg(sum);
        while(t--){
            if(sum==a){
                cout << "YES\n";
                return;
            }
            sum += 9;
        }
        cout << "NO\n";
    }
    else{
        cout << "NO\n";
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
