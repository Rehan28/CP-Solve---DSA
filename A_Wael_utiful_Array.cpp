#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 2e5 + 10;

vector<int> sq;
vector<int> pfx;
void precal(){
    for (int i = 2; i * i <= N;i++){
        sq.push_back(i * i);
    }
    pfx.push_back(sq[0]);
    for (int i = 1; i <= sq.size();i++){
        pfx.push_back(pfx.back() + sq[i]);
    }
}

vector<int> v[N];
map<int, vector<int>> mp;
map<pair<int, int>, int> dp;

int f(int val,int pos){
    int ans = 0;
    if(dp[{val,pos}]>0){
        return dp[{val, pos}];
    }
    ans = f(va)
    for (int i = 0; i < v[val].size();i++){
        int value = v[val][i];
        //dbg(value);
        int sum = 0;
        for(auto x:mp[value]){
            if(x>pos){
                int vx = 0;
                //dbg(val + value);
                for (int k = 0; k < sq.size(); k++){
                    if(value + val<=sq[k]){
                        break;
                    }
                    //dbg(sq[k]);
                    int yy = min(val, min(value, sq[k]-1));
                    //dbg(yy);
                    vx += yy;
                }
                //dbg(vx);
                sum += f(value, x) + vx+1;
                break;
            }
        }
        ans = max(sum, ans);
    }
    return dp[{val,pos}] = ans;
}

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int b[n];
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    for (int i = 0; i < n;i++){
        b[i] = a[i];
        mp[a[i]].push_back(i);
    }
    sort(b, b + n);
    int mx = b[n - 1] + b[n - 2];
    int pos = lower_bound(sq.begin(), sq.end(), mx) - sq.begin();
    if(pos==sq.size()){
        pos--;
    }
    map<int, int> mpp;

    for (int i = 0; i < n;i++){
        if(mpp[a[i]]==1){
            continue;
        }
        for (int j = 0; j <= pos;j++){
            int vl = sq[j];
            int val = vl - a[i];
            if(val<1){
                continue;
            }
            v[a[i]].push_back(val);
        }
        mpp[a[i]]++;
    }
    int ans = INT_MIN;
    for (int i = 0; i < 1;i++){
        ans = max(ans, f(a[i], i));
    }
    cout << ans << "\n";
    for (int i = 0; i < n;i++){
        v[a[i]].clear();
    }
    mp.clear();
    dp.clear();
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    precal();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
