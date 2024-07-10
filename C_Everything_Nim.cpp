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
    int a[n];
    cin(a,n);
    set<int> st;
    for (int i = 0; i < n;i++){
        st.insert(a[i]);
    }
    int x = st.size();
    bool f = 0;
    if(x%2){
        f = 0;
    }
    else{
        f = 1;
    }
    int y = 0;
    vector<int> v;
    v.push_back(0);
    for (auto i:st){
        v.push_back(i);
    }
    for (int i = 1; i <= x;i++){
        int p = v[i] - v[i - 1];
        if(p>1 and y==0){
            f = 0;
            break;
        }
        else if(p>1){
            f = 1;
            break;
        }
        if(y==1){
            y = 0;
        }
        else{
            y = 1;
        }
    }
    if (f == 0)
    {
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
    }
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
