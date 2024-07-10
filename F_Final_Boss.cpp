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
    int h,n;
    cin>>h>>n;
    int a[n];
    cin(a,n);
    int c[n];
    cin(c, n);
    set<pair<pair<int, int>, pair<int,int>>> st;
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum += a[i];
        st.insert(make_pair(make_pair(c[i], a[i]),make_pair(c[i],i)));
    }
    h -= (sum);
    if(h<=0){
        cout << 1 << "\n";
        return;
    }
    int time = 1;
    int l = 1;
    while(h>0){
        for(auto it : st){
            int time1 = it.first.first;
            time = time1;
            int c = it.second.first;
            time1 += c;
            int ci = it.second.second;
            h -= it.first.second;
            int aa = it.first.second;
            auto i = st.begin();
            st.erase(i);
            st.insert(make_pair(make_pair(time1, aa),make_pair(c,ci)));
            break;
        }
    }
    cout << time+1 << "\n";
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
