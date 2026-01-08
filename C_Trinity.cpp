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
    sort(a, a + n);

    vector<int> v;
    for (int i = 0; i < n;i++){
        v.push_back(a[i]);
    }
   
    int ans = INT_MAX;
   
    for (int i = 0; i < n-1;i++){
        int sum = a[i] + a[i + 1]-1;
        int it = upper_bound(v.begin(), v.end(), sum) - v.begin();
       // dbg(it);
        int res = n - it;
        //dbg(res);
        if(a[i]!=a[i+1]){
            int itt = lower_bound(v.begin(), v.end(), a[i+1]) - v.begin();
            itt--;
            res += itt;
        }
        else{
            int itt = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            res += itt;
        }
        //dbg(res);
        ans = min(ans, res);
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
