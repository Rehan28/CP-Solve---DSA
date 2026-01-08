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

void solve(int test) {
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    set<int> st;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
        st.insert(a[i]);
    }
    vector<int> v;
    for(auto x:st){
        v.push_back(x);
    }
    //cout << "\n";

    int ans = INT_MIN;
    n = v.size();
    map<int, vector<int>> mp1;
    int id = 0;
    int last = 0;
    for (int i = 0; i < n-1;i++){
        if(v[i+1]-v[i]>1){
            int x = i;
            for (int j = last; j <= x;j++){
                mp1[id].push_back(mp[v[j]]);
            }
            last = i + 1;
            
            id++;
        }
        if(i+1==n-1 and v[i+1]-v[i]>1){
            mp1[id].push_back(mp[v[i+1]]);
            id++;
        }
        else if(i+1==n-1 and v[i+1]-v[i]<=1){
            int x = i + 1;
            for (int j = last; j <= x;j++){
                mp1[id].push_back(mp[v[j]]);
            }
            id++;
        }
    }
    if(n==1){
        mp1[id].push_back(mp[v[0]]);
        id++;
    }
    for (int i = 0; i < id;i++){
        n = mp1[i].size();
        int pfx[n + 1];
        pfx[0] = 0;
        int j = 1;
        //dbg(i);
        for(auto x : mp1[i]){
            pfx[j] = pfx[j - 1] + x;
            j++;
        }
        int sum = INT_MIN;
        bool f = true;
        for (int j = 1; j+k-1 <= n;j++){
            int x = pfx[j + k - 1] - pfx[j - 1];
            //dbg(x);
            sum = max(sum, x);
            f = false;
        }
        if(f){
            sum = pfx[n];
        }
        ans = max(ans, sum);
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
