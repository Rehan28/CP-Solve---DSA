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
    int sum = 0;
    int sum1 = 0;
    int c = 0, c1 = 0;
    for (int i = 0; i < n;i++){
        if(i%2){
            sum += a[i];
            c++;
        }
        else{
            sum1 += a[i];
            c1++;
        }
    }
    if(sum%c==0 and sum1%c1==0 and sum/c==sum1/c1){
        yes;
    }
    else{
        no;
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
