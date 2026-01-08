#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 51;
int f[N];
void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    
    vector<int> v;
    for (int i = 2; i <=50;i++){
        if(!f[i]){
            v.push_back(i);
            for (int j = i; j <=50;j=j+i){
                f[j] = true;
            }
        }
    }

    int sz = v.size();

    for(auto x : v){
        //dbg(x);
    }
     set<int> st;
    int c = 0;
    for(int mask = 0; mask < (1LL << sz+1); mask++) {
        int ans = 1;
        for(int i = 0; i < sz; i++) {
            if(mask & (1LL << i)) {
                ans *= v[i];
            }
        }
        //dbg(ans);
        int ff = true;
        for (int i = 0; i < n;i++){
            if(__gcd(a[i],ans)==1){
                ff = false;
                break;
            }
        }

        if(ff){
            st.insert(ans);
            //dbg(ans);
        }
    }
   
    cout << *st.begin() << "\n";
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
