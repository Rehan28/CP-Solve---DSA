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
    string s;
    cin >> s;
    n = s.size();
    int ans = n - 2;
    for (char i = '0';i<='9';i++){
        for (char k = '0'; k <= '9';k++){
            bool f = true;
            bool ss = false;
            int cnt = 0;
            int x = 0;
            for (int j = 0;j<n;j++){
                if(f and s[j]==i){
                    ss = true;
                    f = false;
                    x++;
                }
                else if(ss and s[j]==k){
                    f = true;
                    ss = false;
                    x++;
                    cnt += 2;
                }
            }
            if(x%2 and i==k){
                cnt++;
                //odd and i and k equal
                // number of i or k is odd we take last one 
            }
            cnt = n - cnt;
            ans = min(cnt, ans);
        }
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
