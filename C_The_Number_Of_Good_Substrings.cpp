#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();

    int zero = 0;
    map<int,int> mp;
    vector<int> v;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            mp[i] = zero;
            zero=0;
            v.push_back(i);
        }
    }

    int ans = 0;
    for (int i = 0;i<v.size();i++){
        string t = "";
        for (int j = v[i];j<n;j++){
            t += s[j];
            int x = t.size();
            int num = 0;
            int two = 1;
            for(int k=x-1;k>=0;k--){
                if(t[k]=='1'){
                    num += two;
                }
                two *= 2;
            }
            int num_zero = num - x;
            if(num_zero<=mp[v[i]]){
                ans++;
            }
            else{
                break;
            }
        }
    }

    cout<<ans<<nl;
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
