#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n;i++){
        if(a[i]%2){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }

    int ans = 0;
    sort(odd.begin(), odd.end());
    if(odd.size()==0){
        cout << ans << "\n";
        return;
    }
    else{
        int x = odd.size() - 1;
        ans += odd[x];
        odd.pop_back();
        for (int i = 0; i < even.size();i++){
            ans += even[i];
        }
        reverse(odd.begin(), odd.end());
       
        for (int i = 0; i < x/2;i++){
            ans += odd[i];
        }
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
