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
    string s;
    cin >> s;
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < n;i++){
        int x = st.size();
        if(s[i]=='_'){
            if(x==0){
                st.push(i + 1);
            }
            else{
                int y = st.top();
                st.pop();
                ans += abs(y - (i + 1));
            }
        }
        else{
            if(s[i]=='('){
                st.push(i + 1);
            }
            else{
                int y = st.top();
                st.pop();
                ans += abs(y - (i + 1));
            }
        }
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
