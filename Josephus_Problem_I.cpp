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
    int n;
    cin>>n;
    set<int> st;
    for (int i = 1; i <= n;i++){
        st.insert(i);
    } 
    int x = 0;
    while (st.size()){
       if(st.size()==1){
           auto it = st.begin();
           cout << *it << "\n";
           st.clear();
       }
       vector<int> v;
       for (auto it = st.begin(); it != st.end();it++){
           if(x==1){
               cout << *it << " ";
               x = 0;
               v.push_back(*it);
           }
           else{
               x = 1;
           }
       }
       for (int i = 0; i < v.size();i++){
           st.erase(v[i]);//same somoy delete korle position nia problem hoy.
       }
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
