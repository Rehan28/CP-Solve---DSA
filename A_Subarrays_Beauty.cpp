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
    vector<int> v[32];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 32;j++){
            if(a[i] & (1<<j)){
                v[j].push_back(1);
            }
            else{
                v[j].push_back(0);
            }
        }
    }
    int sum = 0;
    int val = 1;
    for (int i = 0; i < 32;i++){
        int c = 0;
        for (int j = 0; j < n;j++){
            if(v[i][j]==1){
                c++;
            }
            if(v[i][j]==0 or j==n-1){
                int y = (c * (c + 1)) / 2;
                y = val * y;
                sum += y;
                c = 0;
            }
        }
        val *= 2;
    }
    cout << sum << "\n";
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
