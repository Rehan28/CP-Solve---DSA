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

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}


void solve(int test) {
    int n;
    cin>>n;
    // int a[n];
    // cin(a,n);
    if(n%2){
        cout << n << "\n";
        cout << 2 << " ";
        cout << 1 << " ";
        for (int i = 3; i <= n;i++){
            cout << i << " ";
        }
        cout << "\n";
    }
    else{
        int last = 0;
        for (int i = 0; i < 20;i++){
            if(n & (1 << i)){
                last = i;
            }
        }
        if(isPowerOfTwo(n)){
            int p = pow(2, last+1);
            cout << p-1 << "\n";
            cout << 2 << " ";
            cout << 1 << " ";
            for (int i = 3; i <= n;i++){
                cout << i << " ";
            }
            cout << "\n";
            }
        else{
            int a[n + 1];
            int p = pow(2, last+1);
            p--;
            cout << p << "\n";
            int p1 = pow(2, last);
            p1--;
            for (int i = 1; i < n; i++)
            {
                if(i==p1){
                    continue;
                }
                cout << i << " ";
            }
            
            cout << n << " " << p1 << "\n";
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
