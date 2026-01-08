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
    vector<int> v;
    int md = -1;
    for (int i = 0; i < n;i++){
        if(a[i]%2){
            md = max(md, a[i]);
        }
        else{
            v.push_back(a[i]);
        }
    }
    int x = v.size();
    if(x==n or x==0){
        cout << 0 << "\n";
    }
    else{
        int ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < x;i++){
            if(md>v[i]){
                ans++;
                md += v[i];
            }
            else{
                md += (v[x - 1] * 2);
                ans += 2;
                x--;
                i--;
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
