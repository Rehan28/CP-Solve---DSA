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
    string s = to_string(n);
    int c = 0;
    for (int i = s.size() - 1; i > -1;i--){
        if(s[i]=='0'){
            c++;
        }
        else{
            break;
        }
    }
    if(n==0){
        c = 5;
    }
    if(c==0){
        cout << "Ekok.";
    }
    else if(c==1){
        cout << "Dashak.";
    }
    else if(c==2){
        cout << "Shatak.";
    }
    else{
        cout << "Counterfeit.";
    }
    cout << "\n";
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
