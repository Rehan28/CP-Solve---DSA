#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    vector<int> g[n+1];
    for (int i = 1; i < n;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    set<int> st;

    for (int i = 1; i <= n;i++){
        int x = g[i].size();
        if(x==1){
            st.insert(i);
        }
    }

    if(st.find(k)!=st.end() or n==1){
        cout << "Ayush\n";
    }
    else{
        if((n-2)%2==0){
            cout << "Ayush\n";
        }
        else{
            cout << "Ashish\n";
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
