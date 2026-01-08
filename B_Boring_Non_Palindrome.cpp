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

bool is_palindrom(string s){
    int n;
    n = s.size();
    int j = n - 1;
    for (int i = 0; i < n / 2;i++){
        if(s[i]!=s[j]){
            return false;
        }
        j--;
    }
    return true;
}

void solve(int test) {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n;i++){

        if(is_palindrom(s.substr(i, n-i))){
            string ss = s.substr(0,i);
            //dbg(ss);
            reverse(ss.begin(), ss.end());
            s += ss;
            cout << s << "\n";
            break;
        }
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
