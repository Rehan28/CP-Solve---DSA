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

void solve(int test) {
    int n;
    cin>>n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }
    vector<pair<int, int>> vp1;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        vp1.push_back(make_pair(a, b));
    }

    map<pair<int, int>, int> mp;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            int x = vp[i].first + vp1[j].first;
            int y = vp[i].second + vp1[j].second;
            mp[{x, y}]++;
        }
    }
    for(auto x:mp){
        if(x.second==n){
            cout << x.first.first << " " << x.first.second << "\n";
            return;
        }
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
