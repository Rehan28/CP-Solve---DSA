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
    int x = 2;
    while(1){
        set<int> st;
        for (int i = 0; i < n;i++){
            st.insert(a[i] % x);
            //dbg(a[i] % x);
        }
        if(st.size()==2){
            cout << x << "\n";
            return;
        }
        x *= 2;
        if(x>a[n-1]){
            break;
        }
    }
    x = 3;
    while(1){
        set<int> st;
        for (int i = 0; i < n;i++){
            st.insert(a[i] % x);
        }
        if(st.size()==2){
            cout << x << "\n";
            return;
        }
        x *= 2;
        if(x>a[n-1]){
            break;
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
