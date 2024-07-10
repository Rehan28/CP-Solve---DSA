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
    int one = 0;
    bool f = false;
    for (int i = 0; i < n;i++){
        if(s[i]=='1'){
            one++;
        }
        if(i!=n-1 and s[i]==s[i+1] and s[i]=='1'){
            f = true;
        }
    }
    if(one%2 or (one==2 and f)){
        no;
        return;
    }
        yes;
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
