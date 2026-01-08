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

    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    n -= 2;

    for (int i = 1; i <= n;i++){
        if(n%i==0){
            int x = n / i;
            if(mp[x]>=1 and mp[i]>=1 and i!=x){
                cout << i << " " << x << "\n";
                break;
            }
            else if(mp[x]>=2 and i==x){
                cout << i << " " << x << "\n";
                break;
            }
        }
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
