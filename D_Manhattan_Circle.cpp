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
    int n,m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    int x ,y;
    for (int i = 0; i < n;i++){
        int c = 0;
        for (int j = 0;j<m;j++){
            if(s[i][j]=='#'){
                c++;
                x = j+1;
            }
        }
        if(c==1){
            break;
        }
    }
    for (int i = 0; i < m;i++){
        int c = 0;
        for (int j = 0;j<n;j++){
            if(s[j][i]=='#'){
                c++;
                y = j + 1;
            }
        }
        if(c==1){
            break;
        }
    }
    cout << y << " " << x << "\n";
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
