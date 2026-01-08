#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    int t = 1000;
    while (t--){
         for (int i = 0; i < n;i++){
            if(s[i]=='N'){
                y++;
            }
            else if(s[i]=='S'){
                y--;
            }else if(s[i]=='E'){
                x++;
            }else{
                x--;
            }
            if(x==a and y==b){
                yes;
                return;
            }
            // dbg(x);
            // dbg(y);
         }
    }
    
   
    no;
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
