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

void solve(int test) {
    int n, q;
    cin >> n >> q;
    int a[n];
    cin(a,n);
    int mx[n];
    mx[0] = a[0];
    for (int i = 1; i < n;i++){
        mx[i] = max(mx[i - 1], a[i]);
    }
    int mn[n];
    mn[n-1] = a[n-1];
    for (int i = n-2; i>-1;i--){
        mn[i] = min(mn[i + 1], a[i]);
    }
    string s;
    cin >> s;
    set<pair<int, int>> st;
    for (int i = 0; i < n - 1;i++){
        int x = i + 1;
        int y = i + 2;
        if(s[i]=='L' and s[i+1]=='R' and (mx[i]>=y or mn[i+1]<=x)){
            st.insert(make_pair(i, i + 1));
        }
    }
    //dbg(st.size());
    while(q--){
        int x;
        cin >> x;
        if(s[x-1]=='L'){
            if(s[x]=='R'){
                auto it = st.find({x - 1, x});
                if(it!=st.end()){
                    st.erase(it);
                }
            }
            s[x - 1] = 'R';
            x--;
           
            if(x!=0){
                int i = x - 1;
                int xx = i + 1;
                int y = i + 2;
                if(s[i]=='L' and s[i+1]=='R' and (mx[i]>=y or mn[i+1]<=xx)){
                    st.insert(make_pair(i, i + 1));
                }
            }
            if(st.size()==0){
                yes;
            }
            else{
                no;
            }
        }
        else{
            x--;
            if(s[x-1]=='L'){
                auto it = st.find({x - 1, x});
                if(it!=st.end()){
                    st.erase(it);
                }
            }
            s[x] = 'L';
            if(x!=n-1){
                int i = x;
                int xx = i + 1;
                int y = i + 2;
                if(s[i]=='L' and s[i+1]=='R' and (mx[i]>=y or mn[i+1]<=xx)){
                    st.insert(make_pair(i, i + 1));
                }
            }
            if(st.size()==0){
                yes;
            }
            else{
                no;
            }
        }

    }
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
