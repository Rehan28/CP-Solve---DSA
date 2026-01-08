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
    string s;
    cin >> s;
    string ss = "";
    if(s.size()<=2){
        no;
        return;
    }
    for (int i = 2; i < s.size();i++){
        if(i==2 and s[i]=='0'){
            no;
            return;
        }
        ss += s[i];
    }
    int x = stoi(ss);
    if(s[0]=='1' and s[1]=='0' and x>=2){
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
