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
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    cin(a,n);
    int b[m];
    int ans = 0;
    map<int, int> mp;
    map<int, int> mp1;
    for (int i = 0; i < m;i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    int val = 0;
    for (int i = 0; i < m;i++){
        mp1[a[i]]++;
        if(mp[a[i]]>=mp1[a[i]]){
            val++;
        }
    }
    if(val>=k){
        ans++;
    }
    for (int i = m; i < n;i++){
        int x = i - m;
        mp1[a[x]]--;
        if(mp1[a[x]]<mp[a[x]]){
            val--; 
        }
        
        mp1[a[i]]++;
        if(mp[a[i]]>=mp1[a[i]]){
            val++;
        }
        if(val>=k){
            ans++;
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
