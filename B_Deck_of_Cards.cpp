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
    int l = 0;
    int r = n - 1;
    char ans[n];
    for(int i=0;i<n;i++){
        ans[i] = '+';
    }
    if(k==n){
        for (int i = 0; i < n;i++){
            cout << '-';
        }
        cout<<nl;
        return;
    }
    int c = 0;
    for (int i = 0; i < k;i++){
        if(s[i]=='0'){
            ans[l] = '-';
            l++;
        }
        else if(s[i]=='1'){
            ans[r] = '-';
            r--;
        }
        else{
            c++;
        }
    }

    int len = n - k;

    for(int i=l;i<=r;i++){
        if(i>=(l+c) and i<=(l+len-1)){
            ans[i] = '+';
        }
        else{
            ans[i] = '?';
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout<<nl;
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
