#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=1;i<=n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin>>n>>m;
    int a[n+2];
    cin(a,n);
    a[0] = 0;
    a[n + 1] = INT_MAX;
    set<int> s;
    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 1; i <= n;i++){
        if(a[i]>a[i+1]){
            dbg(i);
            while(!s.empty()){
                auto it = s.begin();
                int x = *it;
                if(x>=a[i-1] and x<=a[i+1]){
                    a[i] = x;
                    s.erase(it);
                    break;
                }
                else if(x>=a[i]){
                    a[i + 1] = x;
                    s.erase(it);
                    break;
                }
                else{
                    s.erase(it);
                }
            }

        }
    }

    for (int i = 0; i < n+2;i++){
        cout << a[i] << " ";
    }
}
int32_t main() {
    Muku28();
    int test=1;
   // cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
