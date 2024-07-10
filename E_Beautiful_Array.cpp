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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    vector<pair<int, int>> vp;
    for (int i = 0;i<n;i++){
        int m = a[i] % k;
        vp.push_back(make_pair(m, a[i]));
    }
    sort(vp.begin(),vp.end());
    int c = 0;
    vector<int> v[n];
    for (int i = 0; i < n-1;i++){
        int x = vp[i].first;
        int y = vp[i+1].first;
        v[c].push_back(vp[i].second);
        if(x!=y){
            c++;
        } 
    }
    v[c].push_back(vp[n - 1].second);
    c = 0;
    int p = 0;
    int ans = 0;
    while(v[c].size()){
        int x = v[c].size();
        //dbg(x);
        if(x%2==1 and (n%2==0 or p==1)){
            cout << -1 << "\n";
            return;
        }
        else if(x%2==1 and p==0){
            p = 1;
            if(x>1){
                int d = INT_MAX;
                int sum = 0;
                for (int i = 0; i < x-1;i = i+2){
                    sum += abs(v[c][i + 1] - v[c][i]) / k;
                }
                d = min(sum, d);
                sum = 0;
                for (int i = x - 1; i > 0;i= i-2){
                    sum += abs(v[c][i - 1] - v[c][i]) / k;
                }
                d = min(sum, d);
                //dbg(d);
                sum = 0;
                if(x==3){
                    sum = min(abs(v[c][0] - v[c][1]) / k, abs(v[c][1] - v[c][2]) / k);
                }
                sum = 0;
                if(x!=7){
                    for (int i = 0; i < x / 2;i = i+2){
                        sum += abs(v[c][i + 1] - v[c][i]) / k;
                    }
                    for (int i = (x/2) + 1 ; i < x;i = i+2){
                        sum += abs(v[c][i + 1] - v[c][i]) / k;
                    }
                    d = min(sum, d);
                }
                ans += d;
            }
        }
        else{
            for (int i = 0; i < x;i = i+2){
                ans += abs(v[c][i + 1] - v[c][i]) / k;
            }
        }
        //dbg(ans);
        c++;
    }
    cout << ans << "\n";
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
