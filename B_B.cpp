#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            for (int k = j + 1; k < n;k++){
                int x = a[i] ^ a[j] ^ a[k];
                cout << x << "\n";
            }
        }
    }
    no;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
