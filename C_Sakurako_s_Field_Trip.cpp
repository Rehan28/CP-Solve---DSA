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
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 1; i <= n / 2;i++){
        int x = n - i + 1;
        int d = 0;
        if(i!=1 and a[i-1]==a[i-2]){
            d++;
        }
        if(x!=n and a[x-1]==a[x]){
            d++;
        }
        //
        int d1 = 0;
        if(i!=1 and a[x-1]==a[i-2]){
            d1++;
        }
    
        if(x!=n and a[i-1]==a[x]){
            d1++;
        }
        if(d1<d){
            swap(a[i - 1], a[x - 1]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n-1;i++){
        //cout << a[i] << " ";
        if(a[i]==a[i+1]){
            ans++;
        }
    }
    //cout << a[n-1] << "\n";
    cout <<ans<< "\n"; 
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
