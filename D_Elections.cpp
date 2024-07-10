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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    a[0] += k;
    int x = *max_element(a, a + n);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(mp[a[i]]==0){
            mp[a[i]] = i+1;
        }
    }
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
        if(a[i]==x and mp[a[i]]==i+1){
            cout << 0 << " ";
        }
        else{
            if(sum>=x){
                cout << i << " ";
            }
            else{
                cout << i + 1 << " ";
            }
        }
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
