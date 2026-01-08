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
    int x, y, k;
    cin >> x >> y >> k;
    if(k%2){
        cout << x*k << " " << y*k << "\n";
        int x1 = k + 10000;
        for (int i = 0; i < k/2;i++){
            cout << x1 << " " << x1 << "\n";
            x1++;
        }
        x1 = k + 10000;
        for (int i = 0; i < k/2;i++){
            cout << -x1 << " " << -x1 << "\n";
            x1++;
        }
    }
    else{
        if(x==0){
            cout << -k << " ";
        }
        else{
            cout << x * k << " ";
        }
        if(y==0){
            cout << - k << "\n";
        }
        else{
            cout << y * k << "\n";
        }
        if(x==0){
            cout << k << " ";
        }
        else{
            cout << 0 << " ";
        }
        if(y==0){
            cout << k << "\n";
        }
        else{
            cout << 0 << "\n";
        }
        int x1 = k + 10000;
        for (int i = 1; i < k/2;i++){
            cout << x1 << " " << x1 << "\n";
            x1++;
        }
        x1 = k + 10000;
        for (int i = 1; i < k/2;i++){
            cout << -x1 << " " << -x1 << "\n";
            x1++;
        } 
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
