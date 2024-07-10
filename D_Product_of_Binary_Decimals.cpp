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
vector<string> v;
map<ll, ll> mp;
void GC(){
    int n = 6;
    for (int i = 0; i < (1 << n); i++) {
        int val = (i ^ (i >> 1));
        bitset<32> r(val);
        string s = r.to_string();
        v.push_back(s.substr(32 - n));
    }
}
void solve(int test) {
    int n;
    cin>>n;
    if(n==1){
        yes;
        return;
    }
    for (int i = v.size()-1; i >1;i--){
        int x = stoi(v[i]);
        if(n%x==0){
            int t = 5;
            while(n%x==0){
                n /= x;
                // dbg(x);
                // cout << n << "\n";
                if(n==1){
                    yes;
                    return;
                }
            }
        }
    }
    no;
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    GC();
    sort(v.begin(), v.end());
    for (int i = 1; i <= test; i++){
        solve(i);
    }
    return 0;
}
