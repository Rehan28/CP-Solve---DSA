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
    int n, m;
    cin >> n >> m;
    string s[n];
    int one = 0;
    int need = 0;
    for (int i = 0; i < n;i++){
        cin >> s[i];
        if(i!=0 and i!=n-1){
            for (int j = 1; j < m - 1;j++){
                if(s[i][j]=='1'){
                    one++;
                }
            }
            if (s[i][0] == '0'){
                need++;
            }
            if (s[i][m-1] == '0'){
                need++;
            }
        }
        else{
            for (int j = 0; j < m;j++){
                if(s[i][j]=='0'){
                    need++;
                }
            }
        }
    }
    if(one>=need){
        cout << need << "\n";
    }
    else{
        cout << -1 << "\n";
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
