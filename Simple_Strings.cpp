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

char change(char c){
    if(c=='z'){
        c = 'a';
    }
    else{
        c++;
    }
    return c;
}

void solve(int test) {
    string s;
    cin >> s;
    int n = s.size();
    map<int, int> mp;
    for (int i = 0; i < n-1;i++){
        if(s[i]==s[i+1]){
            if(mp[i]==1){
                s[i] = change(s[i]);
            }
            else{
                s[i + 1] = change(s[i + 1]);
                mp[i + 1] = 1;
            }
        }
    }
    cout << s << "\n";
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
