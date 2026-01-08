#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int unsigned long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    multiset<int> s;
    multiset<int> st;
    if(n==1){
        cout << 1 << "\n";
        return;
    }
    for(int i=0;i<n;i++) {
        s.insert(a[i]);
        st.insert(b[i]);
    }


    int ans = LLONG_MAX;
    for(int i=0;i<n;i++) {
       s.erase(s.find(a[i]));
       st.erase(st.find(b[i]));
       int x = *s.begin();
       auto it = s.end();
       --it;
        int y = *it;
        int val = y - x + 1;

       x = *st.begin();
       it = st.end();
       --it;
       y = *it;
       int val1 = y - x + 1;
    //    dbg(val);
    //    dbg(val1);

       if((val*val1)==n-1){
           ans = min(ans, (val * (val1 + 1)));
           ans = min(ans, ((val + 1) * val1));
       }
       else{
         ans = min(ans, (val * val1));
       }
       

       s.insert(a[i]);
       st.insert(b[i]);
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
