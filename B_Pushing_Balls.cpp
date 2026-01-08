#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }

    for (int i = 0; i < n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='1'){
                int f = 0;
                for (int k = j - 1; k > -1;k--){
                    if(s[i][k]=='0'){
                        f++;
                        break;
                    }
                }
                for(int k=i-1;k>-1;k--){
                    if(s[k][j]=='0'){
                        f++;
                        break;
                    }
                }

                if(f==2){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
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
