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
    int n,k;
    cin>>n>>k;
    string s;
    cin >> s;
    int x = 0;
    string ans = "";
    ans += s[x];
    int point = n;
    for (int i = 1; i < n;i++){
        if(s[x]<s[i]){
            break;
        }
        else if(s[x]==s[i]){
            point = i;
            break;
        }
        ans += s[i];
    }
    string p = "";
    if(point!=n){
       p += s[point]; 
    }
    bool f = true;
    for (int i = point+1; i < n;i++){
        if(ans<p or s[i]>=s[0]){
            break;
        }
        else{
            p += s[i];
        }
    }
    ans += p;
    while (ans.size()<=k){
        ans += ans;
    }
    for (int i = 0; i < k;i++){
        cout << ans[i];
    }
    cout <<"\n";
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
