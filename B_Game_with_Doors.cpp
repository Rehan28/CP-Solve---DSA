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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
        map<int, int> mp;
        for (int i = a; i <= b;i++){
            mp[i]++;
        }
        for (int i = x; i <= y;i++){
            mp[i]++;
        }
        int c = 0;
        for (int i = min(a, x); i <= max(b, y);i++){
            if(mp[i]>1){
                c++;
            }
        }
        if(x==a){
            c--;
        }
        if(y==b){
            c--;
        }
        cout << c + 1 << "\n";
    
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
