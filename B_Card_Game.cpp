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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int ans = 0;
    for (int i = 0; i < 2;i++){
        for (int j = 0; j < 2;j++){
            int x1, x2, y1, y2;
            if(i==0){
                x1 = a;
                x2 = b;
            }
            else{
                x1 = b;
                x2 = a;
            }
            if(j==0){
                y1 = x;
                y2 = y;
            }
            else{
                y1 = y;
                y2 = x;
            }

            int c = 0;
            if(x1>y1){
                c++;
            }
            else if(x1<y1){
                c--;
            }
            if(x2>y2){
                c++;
            }
            else if(x2<y2){
                c--;
            }
            if(c>0){
                ans++;
            }
        }
    }
    cout << ans << "\n";
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
