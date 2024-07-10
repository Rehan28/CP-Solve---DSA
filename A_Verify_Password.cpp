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
    string d = "";
    string l = "";
    bool f = false;
    for (int i = 0; i < n;i++){
        if(s[i]<'0' or s[i]>'9'){
            f = true;
        }
        if(f){
            l += s[i];
        }
        else{
            d += s[i];
        }
    }
    string dd = d;
    string ll = l;
    sort(dd.begin(), dd.end());
    sort(ll.begin(), ll.end());
    for (int i = 0; i < dd.size();i++){
        if(dd[i]!=d[i]){
            no;
            return;
        }
    }
    for (int i = 0; i < ll.size();i++){
        if(ll[i]!=l[i]){
            no;
            return;
        }
        if(l[i]<'a' or l[i]>'z'){
            no;
            return;
        }
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
