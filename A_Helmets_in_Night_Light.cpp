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

bool com(int a, int b) 
{ 
    // Custom comparison logic 
    return a < b; // it sorts in ascending order 
} 

void solve(int test) {
    int n,k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        vp.push_back(make_pair(b[i], a[i]));
    }
    sort(vp.begin(), vp.end(), com);
    reve
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
