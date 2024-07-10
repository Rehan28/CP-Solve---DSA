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
    int n,m;
    cin>>n>>m;
    string s;
    cin >> s;
    int a[m];
    cin(a,m);
    string c;
    cin >> c;
    sort(a, a + m);
    sort(c.begin(), c.end());
    set<int> st;
    for (int i = 0; i < m;i++){
        st.insert(a[i]);
    }
    int j = 0;
    for(auto x : st){
        int i = x - 1;
        s[i] = c[j];
        j++;
    }
    cout << s << "\n";
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
