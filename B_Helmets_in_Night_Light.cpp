#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

bool comp(pair<int,int> a, pair<int,int> b) {
   if(a.first==b.first)
   {
       return a.second > b.second;
   }
   return a.first < b.first;
}

void solve(int test) {
    int n, p;
    cin>>n>>p;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b,n);

    vector<pair<int, int>> vp;

    for(int i=0;i<n;i++){
        vp.push_back(make_pair(b[i],a[i]));
    }

    sort(vp.begin(), vp.end() ,comp);

    int x = n-1;
    int ans = 0;
    for(int i=0;i<n;i++){
        //cout<<vp[i].first<<" "<<vp[i].second<<nl;
        if(x<=0){
            break;
        }
        if(p<vp[i].first){
            ans += (p);
            x--;
            continue;
        }
        ans += (vp[i].first*min(x,vp[i].second));
        x -= vp[i].second;
    }

    cout << ans+p << "\n";
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
