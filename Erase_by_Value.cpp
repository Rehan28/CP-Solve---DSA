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

    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(mp[a[i]]==0){
            v.push_back(a[i]);
            mp[a[i]]++;
        }
    }

    int removed__value = v[v.size() - 1];
    for (int i = 0; i < v.size()-1;i++){
        if(v[i]>v[i+1]){
            removed__value = v[i];
            break;
        }
    }

    for (int i = 0; i < n;i++){
        if(a[i]==removed__value){
            continue;
        }
        cout<<a[i]<<" ";
    }
    cout << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
