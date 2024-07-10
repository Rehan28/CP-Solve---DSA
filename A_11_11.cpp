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
    int ans = 0;
    for (int i = 1; i <= n;i++){
        string s = to_string(i);
        char c = s[0];
        for (int j = 1; j <= a[i-1];j++){
            string s1 = to_string(j);
            bool f = true;
            for (int k = 0; k <s.size();k++){
                if(s[k]!=c){
                    f = false;
                    break;
                }
            }
            for (int k = 0; k <s1.size();k++){
                if(s1[k]!=c){
                    f = false;
                    break;
                }
            }
            if(f){
                //cout << i << " " << j << "\n";
                ans++;  
            }
        }
       
    }
    cout << ans << "\n";
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
