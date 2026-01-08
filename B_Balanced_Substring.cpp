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
    string s;
    cin>>s;

    map<int,int> mp;

    int one = 0;
    int zero = 0;
    int ans = 0;

    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }

        int gap = one - zero;
        
        if(mp[gap]==0 and gap!=0){
            mp[gap] = i+1;//dbg(gap);
        }
        else{
            if(gap==0){
                ans = max(ans, i + 1);
            }
            else{
                ans = max(ans, i - mp[gap]+1);
            }
        }
    }

    cout << ans << "\n";
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
