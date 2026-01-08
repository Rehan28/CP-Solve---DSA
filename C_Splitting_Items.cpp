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
    vector<int> v;
    for (int i = 0;i<n;i++){
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n-1;i = i+2){
        int x = v[i] - v[i + 1];
        sum += v[i];
        if(k>=x){
            sum1 += v[i + 1] + x;
            k -= x;
        }
        else{
            sum1 +=(v[i+1]+k);
            k = 0;
        }
        //cout << sum << " " << sum1 << "\n";
    }
    if(n%2){
        sum += v[n - 1];
    }
    cout << sum - sum1 << "\n";
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
