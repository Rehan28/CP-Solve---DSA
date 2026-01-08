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
    string s;
    cin >> s;

    int target = 0;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            int gap = i - target;
            if(gap<=k){
                mp[target] = 1;
                target++;
                k -= gap;
            }
            else{
                mp[i-k] = 1;
                k = 0;
            }   
        }
    }

    for (int i = 0; i < n;i++){
        if(mp[i]!=0){
            //dbg(i);
            cout << '0';
        }
        else{
            cout << '1';
        }
    }
    cout<<nl;
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
