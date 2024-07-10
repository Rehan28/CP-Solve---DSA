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
const int N = 1e5 + 9;
int a[N];
int vc(int n,vector<int> v){
    for (int i = 0; i < v[n].size();i++){
        if(a[n-1]>a[v[n][i]]){
            
        }
    }
}
void solve(int test) {
    int n,q;
    cin>>n>>q;
    cin(a,n);
    vector<int> v[n+1];
    for (int i = 0; i < n;i++)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
    vc(q,v);
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
