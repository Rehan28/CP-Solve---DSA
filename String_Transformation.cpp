#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    string s, t;
    cin >> s >> t;
    n = s.size();
    for (char c = 'a'; c <= 'z';c++){
        char x = '!';
        for (int i = 0; i < n;i++){
            if(s[i]==c){
                if(x=='!'){
                    x = t[i];
                }
                else if(x!=t[i]){
                    no;
                    return;
                }
            }
        }
        char x1 = '!';
        for (int i = 0; i < n;i++){
            if(t[i]==c){
                if(x1=='!'){
                    x1 = s[i];
                }
                else if(x1!=s[i]){
                    no;
                    return;
                }
            }
        }
    }
    yes;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
