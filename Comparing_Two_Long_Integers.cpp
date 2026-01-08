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
    string s, s1, c;
    cin >> c;
    s = "";
    bool f = false;
    for (int i = 0; i < c.size();i++){
        if(c[i]!='0'){
            f = true;
        }
        if(f){
            s += c[i];
        }
    }
    string c1;
    cin >> c1;
    c = c1;
    s1 = "";
    f = false;
    for (int i = 0; i < c.size();i++){
        if(c[i]!='0'){
            f = true;
        }
        if(f){
            s1 += c[i];
        }
    }
    if(s.size()==s1.size()){
        for (int i = 0; i < s.size();i++){
            if(s[i]>s1[i]){
                cout << ">\n";
                return;
            }
            else if(s[i]<s1[i]){
                cout << "<\n";
                return;
            }
        }
        cout << "=\n";
    }
    else if(s.size()>s1.size()){
        cout << ">\n";
    }
    else{
        cout << "<\n";
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
