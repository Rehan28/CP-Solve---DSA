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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }
    vector<int> v;
    for(auto x : mp){
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    if(mp.size()==k){
        cout << v[0] * k << "\n";
    }
    else{
        cout << "0\n";
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
