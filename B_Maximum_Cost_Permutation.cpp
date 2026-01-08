#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=1;i<=n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n+1];
    cin(a,n);

    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        mp[a[i]]++;
    }

    vector<int> v;
    for (int i = 1; i <= n;i++){
        if(mp[i]==0){
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int j = 0;
    for (int i = 1; i <= n;i++){
        if(a[i]==0){
            a[i] = v[j];
            j++;
        }
    }

    int s = 0;
    int l = -1;
    int c = 0;
    for (int i = 1; i <= n;i++){
        if(a[i]!=i and c==0){
            s = i;
            c = 1;
        }
        else if(a[i]!=i and c==1){
            l = i;
        }
    }
  
    cout << (l - s)+1 << "\n";
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
