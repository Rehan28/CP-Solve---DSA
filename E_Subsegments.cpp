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
    int a[n];
    cin(a,n);

    set<int> st;
    map<int, int> mp;
    for (int i = 0; i < k;i++){
        mp[a[i]]++;
        if(mp[a[i]]==1){
            st.insert(a[i]);
        }
        else{
            st.erase(a[i]);
        }
    }
    if(st.size()==0){
        cout<<"Nothing"<<nl;
    }
    else{
        auto it = st.end();
        it--;
        cout<<*it<<nl;
    }

    for(int i=k;i<n;i++){
        mp[a[i-k]]--;
        if(mp[a[i-k]]==1){
            st.insert(a[i-k]);
        }
        else{
            st.erase(a[i-k]);
        }
       
        mp[a[i]]++;
        if(mp[a[i]]==1){
            st.insert(a[i]);
        }
        else{
            st.erase(a[i]);
        }

        if(st.size()==0){
            cout<<"Nothing"<<nl;
        }
        else{
            auto it = st.end();
            it--;
            cout<<*it<<nl;
        }
    }
    
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
