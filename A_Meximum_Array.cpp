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

    map<int, int> mp;
    map<int, int> f;
    int mex = 0;
    for (int i = n - 1; i > -1;i--){
        f[a[i]]++;
        while(f[mex]>0){
            mex++;
        }
        mp[i] = mex;
    }

    vector<int> ans;
    for (int i = 0; i < n;i++){
        int target_mex = mp[i];
        ans.push_back(target_mex);
        mex = 0;
        map<int,int> temp_f;
        for (; i < n;i++){
            temp_f[a[i]]++;
            while(temp_f[mex]>0){
                mex++;
            }
            if(mex==target_mex){
                break;
            }
        }
    }
    cout<<ans.size()<<nl;
    for(auto x:ans){
        cout<<x<<" ";
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
