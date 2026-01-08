#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();

    int in = 0;
    for (int i = 0; i < n-1;i++){
        if(s[i]==s[i+1] and s[i]=='*'){
            in = 1;
            break;
        }
        else if(s[i]=='*' and s[i+1]=='<'){
            in = 1;break;
        }
        else if(s[i]=='>' and s[i+1]=='*'){
            in = 1;
            break;
        }
        else if(s[i]=='>' and s[i+1]=='<'){
            in = 1;
            break;
        }
    }
    if(in){
        cout << -1 << "\n";
    }
    else{
        int ans = 0;
        for (int i = 0; i < n;i++){
            if(s[i]=='<' or s[i]=='*'){
                ans = i + 1;
            }
            else{
                break;
            }
        }

        for (int i = n-1; i>-1;i--){
            if(s[i]=='>' or s[i]=='*'){
                ans = max(ans,(n-i));
            }
            else{
                break;
            }
        }
        cout << ans << "\n";
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
