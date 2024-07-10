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
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0 and b==0 and (c==1 or c==0)){
        cout << 0 << "\n";
    }
    else if((a+1)!=c){
        cout << -1 << "\n";
    }
    else{
        int ans = 0;
        if(a!=0){
            ans = log2(a);
            int x = ans+1;
            int num = 0;
            while(x--){
                num += (pow(2, x));
            }
             
             
            ans++;
        }

        
        cout << ans << "\n";
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
