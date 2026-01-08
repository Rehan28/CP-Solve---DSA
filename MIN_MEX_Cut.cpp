
#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();
    int one = 0;
    int c = 0;
    char last = s[0];
    int zero_seg = 0;
    if(last=='0'){
        zero_seg++;
    }
    for (int i = 0; i < n;i++){
        if(s[i]!=last){
            c++;
            last = s[i];
            if(last=='0'){
                zero_seg++;
            }
        }
        if(s[i]=='1'){
            one++;
        }
    }
    if(c==0 and one==n){
        cout << 0 << "\n";
    }
    else if(zero_seg==1){
        cout << 1 << "\n";
    }
    else if(c==1){
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
    }
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
