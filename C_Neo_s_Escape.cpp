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

    set<int> st;
    vector<int> v;
    map<int, vector<int>> mp;
    int last = -1;
    int pp = 1;
    for (int i = 0; i < n;i++){
        if(a[i]!=last){
           st.insert(a[i]);
           mp[a[i]].push_back(pp);
           last = a[i];
           pp++;
        }
        
    }

    for(auto x:st){
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int ans = 0;
    map<int, int> p;
    for (auto x:v){
        for(auto pos:mp[x]){
            //dbg(pos);
            if(p[pos+1]==0 and p[pos-1]==0){
                ans++;
            }
            p[pos] = 1;
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
