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
const int N = 1e5 + 9;

void solve(int test) {
    int n;
    cin>>n;
    vector<int> one;
    map<int, int> mp;
    vector<int> v;
    map<int, int> mp1;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        if(y==0){
            v.push_back(x);
            mp1[x]++;
        }
        else{
            one.push_back(x);
            mp[x]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < v.size();i++){
        if(mp[v[i]]!=0){
            ans += v.size() - 1;
        }
    }
    for (int i = 0; i < one.size();i++){
        if(mp1[one[i]]!=0){
            ans += one.size() - 1;
        }
    }
    
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
