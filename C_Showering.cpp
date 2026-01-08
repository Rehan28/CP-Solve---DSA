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
    int n, s, m;
    cin >> n >> s >> m;
    int last = 0;
    int x;
    bool f = false;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        x = a - last;
        if(x>=s){
            f = true;
        }
        last = b;
    }
    x = m - last;
    if(f or x>=s){
        yes;
    }
    else{
        no;
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
