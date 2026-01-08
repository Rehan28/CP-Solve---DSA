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
    int a[n];
    cin(a,n);

    vector<int> v;

    for (int i = 0;i<n;i++){
        if(s[i]=='B'){
            v.push_back(i);
        }
    }

    if(v.size()==0){
        cout << 0 << nl;
        return;
    }
    
    vector<int> vv;
    int block = 0;
    for(int i=0;i<v.size()-1;i++){
        int x = 0;
        for (int j = v[i]+1; j < v[i + 1];j++){
            x = max(x, a[j]);
            block++;
        }
        vv.push_back(x);
    }


    sort(vv.begin(), vv.end());
    int ans = 0;

    //dbg(block);
    
    if(block>k-1){
        block = block - k;
        ans = vv[block];
    }

   // dbg(ans);

    // red side


    vector<int> v1;
    v1.push_back(-1);
    for (int i = 0;i<n;i++){
        if(s[i]=='R'){
            v1.push_back(i);
        }
    }

    if(v1.size()==0){
        cout << 0 << nl;
        return;
    }
    
    vector<int> vv1;
    int block1 = 0;
    for(int i=0;i<v.size()-1;i++){
        int x = 0;
        for (int j = v1[i]+1; j < v1[i + 1];j++){
            x = max(x, a[j]);
            block1++;
        }
        vv1.push_back(x);
    }


    sort(vv1.begin(), vv1.end());
    int ans1 = 0;

    //dbg(block);
    
    if(block1>k-1){
        block1 = block1 - k;
        ans1 = vv1[block1];
    }

    cout<<min(ans,ans1)<<nl;
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
