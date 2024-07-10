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
    string ss = s;
    sort(ss.begin(), ss.end());
    if(ss[0]==ss[ss.size()-1]){
        no;
    }
    else{
        yes;
        for (int i = 1; i < s.size();i++){
            cout << s[i];
        }
        cout <<s[0]<< "\n";
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
