#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

vector<int> v;
void f(){
    v.push_back(1);
    for (int i = 1; i <= 20;i++){
        v.push_back(v.back()*i);
    }
    reverse(v.begin(), v.end());
}

void solve(int test) {
    cout << "Case " << test << ": ";
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < v.size();i++){
        if(n==0){
           
        }
        if(n>=v[i]){
            
        }
    }
    
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    f();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
