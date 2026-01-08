#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;

    string s, ss;
    cin >> s >> ss;

    n = s.size();
    m = ss.size();

    int j = 0;
    int l = 0;
    int r = 0;

    //baler logic
    int c = 0;
    for (int i = 0; i < m;i++){
        if(ss[i]!=s[j]){
            if(ss[i]=='L' and l>0){
                l--;
                r = 0;
            }
            else if(ss[i]=='R' and r>0){
                r--;
                l = 0;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
        else{
            if(ss[i]=='L'){
                l++;
                r = 0;
            }
            else if(ss[i]=='R'){
                r++;
                l = 0;
            }
            j++;
        }
        if(i==m-1 and j!=n){
            cout << "NO\n";
            return;
        }
    }
    cout<< "YES\n";
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
