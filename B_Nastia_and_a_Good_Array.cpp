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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int pos = 0;
    int x = *min_element(a, a + n);
    for (int i = 0;i<n;i++){
        if(a[i]==x){
            pos = i;break;
        }
    }
    for (int i = 0; i < n-1;i++){
        if(i==pos){
            continue;
        }
        if(__gcd(a[i],a[i+1])!=1){
            if(i==0){
                a[i] = 
            }
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
