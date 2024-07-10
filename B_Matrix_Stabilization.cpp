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
    int a[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin>>a[i][j];
        }
    }
    while (1)
    {
        bool f = true;
        for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            int c = 0;
            int val = 0;
            if(i!=0 and a[i][j]>a[i-1][j]){
                val = max(val, a[i-1][j]);
                c++;
            }
            if(i!=n-1 and a[i][j]>a[i+1][j]){
                c++;
                val = max(val, a[i+1][j]);
            }
            if(j!=0 and a[i][j]>a[i][j-1]){
                c++;
                val = max(val, a[i][j-1]);
            }
            if(j!=m-1 and a[i][j]>a[i][j+1]){
                c++;
                val = max(val, a[i][j+1]);
            }
            if(i==0 or i==n-1){
                c++;
            }
            if(j==0 or j==m-1){
                c++;
            }
            if(n==1 or m==1){
                c++;
            }
            if(c==4){
                f = false;
                a[i][j] = val;
            }
        }
       }
       if(f){
        break;
       }
    }
    
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
                cout << a[i][j] << " ";
        }
        cout << "\n";
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
