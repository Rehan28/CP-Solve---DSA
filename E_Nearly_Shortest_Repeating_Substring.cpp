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
    vector<int> v;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    for(auto d : v){
        string ss = s.substr(0, d);
        string final = "";
        for (int i = 0; i < n/d;i++){
            final += ss;
        }
        int c = 0;
        for (int i = 0; i < n;i++){
            if(final[i]!=s[i]){
                c++;
            }
        }
        //back side
        int x = n - d;
        string ss1 = s.substr(x, n);
        string final1 = "";
        for (int i = 0; i < n/d;i++){
            final1 += ss1;
        }
        int c1 = 0;
        for (int i = 0; i < n;i++){
            if(final1[i]!=s[i]){
                c1++;
            }
        }
        // dbg(d);
        // dbg(final);
        if(c<=1 or c1<=1){
            cout << d << "\n";
            return;
        }
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
