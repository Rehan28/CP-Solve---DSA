#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int ans[n];
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(mp[a[i]]==0){
            ans[i] = a[i];
            mp[a[i]] = 1;
        }
        else{
            ans[i] = 0;
        }
    }
    int x = 1;
    for (int i = 0; i < n;i++){
        if(ans[i]==0){
            while(1){
                if(mp[x]==0){
                    ans[i] = x;
                    x++;
                    break;
                }
                x++;
            }
        }
    }

    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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
