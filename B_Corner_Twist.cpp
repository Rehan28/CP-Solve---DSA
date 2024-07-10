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
    string a[n];
    string b[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    bool f = true;
    for (int i = 0;i<n;i++){
        int sum = 0;
        int sum1 = 0;
        for (int j = 0; j < m;j++){
            sum += a[i][j] - '0';
            sum1 += b[i][j] - '0';
        }
        sum %= 3;
        sum1 %= 3;
        if(sum!=sum1){
            f = false;
        }
    }
    for (int i = 0;i<m;i++){
        int sum = 0;
        int sum1 = 0;
        for (int j = 0; j < n;j++){
            sum += a[j][i] - '0';
            sum1 += b[j][i] - '0';
        }
        sum %= 3;
        sum1 %= 3;
        if(sum!=sum1){
            f = false;
        }
    }
    if(f){
        yes;
    }else{
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
