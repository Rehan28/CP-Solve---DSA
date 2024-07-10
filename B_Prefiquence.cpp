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
    string s, ss;
    cin >> s >> ss;
    int one = 0;
    int z = 0;
    int j = 0;
    int c = 0;
    for (int i = 0; i < m;i++){
        if(j==n){
            break;
        }
        if(ss[i]!=s[j]){
            continue;
        }
        j++;
        c++;
    }
    cout << c << "\n";
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
