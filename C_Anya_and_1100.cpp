#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();

    string s1 = "1100";
    map<int, int> mp;
    int c = 0;
    for (int i = 0; i + 3 < n;i++){
        string ss = "";
        for (int j = i; j <= i + 3;j++){
            ss += s[j];
        }
        if(ss==s1){
            c++;
        }
    }

    int q;
    cin >> q;

    while(q--){
        int a;
        char b;
        cin >> a >> b;
        int pos = a - 1;
        for (int i = pos; i >= pos - 3;i--){
                if(i==-1){
                    break;
                }
                string ss = "";
                for (int j = i; j <= i + 3;j++){
                    if(j==n){
                        break;
                    }
                    ss += s[j];
                }
                if(ss==s1){
                    c--;
                }
        }
        if (b == '0'){
            s[pos] = '0';
        }
        else{
            s[pos] = '1';
        }
        for (int i = pos; i >= pos - 3;i--){
                if(i==-1){
                    break;
                }
                string ss = "";
                for (int j = i; j <= i + 3;j++){
                    if(j==n){
                        break;
                    }
                    ss += s[j];
                }
                if(ss==s1){
                    c++;
                }
        }
        
        if(c==0){
            no;
        }
        else{
            yes;
        }
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
