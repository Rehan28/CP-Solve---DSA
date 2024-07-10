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
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    for (auto x : mp){
        v.push_back(x.first);
    }
    for (int i = 0; i < n;i++){
        int x = mod - a[i];
        x--;
        auto it = lower_bound(v.begin(), v.end(), x);
        int val;
        int pos;
        pos = it - v.begin();
        if(it!=v.end()){
            val = v[pos];
        }
        else{
            pos--;
            val = v[pos];
        }
        //cout << a[i] << " " << pos <<" "<<val<< "\n";
        int val1 = -1;
        if(val>x){
            int pos1 = pos;
            if(pos!=0){
                pos--;
                val = v[pos];
                if(val==a[i] and mp[val]==1){
                    if(pos!=0){
                        val = v[pos - 1];
                    }
                    else{
                        val = v[pos1];
                    }
                }
            }
            val1 = a[i] + val;
        }
        else{
            if(val==a[i] and mp[val]==1){
                if(pos!=0){
                    val1 = a[i] + v[pos - 1];
                }
                else{
                    val1 = -1;
                }
            }
            else{
                val1 = a[i]+v[pos];
            }
        }
        val1 %= mod;
        //dbg(val1);
        int val2 = a[i];
        int sz = v.size();
        //dbg(sz);
        if(v[sz-1]==a[i] and mp[a[i]]==1){
            if(sz==1){
                val2 += v[0];
            }
            else{
                val2 += v[sz - 2];
            }
        }
        else{
            val2 += v[sz - 1];
        }
        val2 %= mod;
        cout << max(val1, val2) << " ";
    }
    cout << "\n";
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
