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
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int pfx[n + 1] = {0};
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + a[i - 1];
    }

    string s;
    cin >> s;
    vector<int> l;
    vector<int> r;
    for (int i = 0; i < n;i++){
        if(s[i]=='L'){
            l.push_back(i + 1);
        }
        else{
            r.push_back(i + 1);
        }
    }
    int ans = 0;
    reverse(r.begin(), r.end());
    int i = 0;
    int j = 0;
    while(1){
        if(i==l.size() or r.size()==j){
            break;
        }
        if(r[j]<l[i]){
            break;
        }
        ans += (pfx[r[j]] - pfx[l[i] - 1]);
        i++;
        j++;
    }
    cout << ans << "\n";
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
