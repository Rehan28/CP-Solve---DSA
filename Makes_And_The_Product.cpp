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
    sort(a, a + n);
    int f = -1;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
        if(f==-1){
            f = a[i];
        }
    }
    set<int> st;
    
    for (int i = 0; i < 3;i++){
        st.insert(a[i]);
    }
    int last = 0;
    int sum = 0;
    for(auto x: st){
        sum += mp[x];
        last = mp[x];
    }
    if(st.size()==1){
        double ans = 1;
        for(int i = 1; i <= 3; i++){
            ans = ans * (last - 3 + i) / i;
        }
        cout << (int)ans << "\n";
    }
    else if(st.size()==2){
        double ans = 1;
        int r = 3 - mp[f];
        //dbg(r);
        for(int i = 1; i <= r; i++){
            ans = ans * (last - r + i) / i;
        }
        if(last==1){
            ans = 1;
        }
        cout << (int)ans << "\n";
    }
    else{
        cout << sum - 2 << "\n";
    }
    
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
