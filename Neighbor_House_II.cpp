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

const int N = 1005;
const int M = 1e6 + 9;
int n;
int a[N];
int dp[N][3][3];

int f(int i, int last, int first_element){
    if(i==n){
        return 0;
    }
    int &ans = dp[i][last][first_element];
    if(ans!=-1){
        return ans;
    }
    ans = f(i + 1, 0, first_element);//first element flag same thakbe
    if(last!=1){
        if(i==0){
            ans = max(ans, f(i + 1, 1, 1)+a[i]);
        }
        else{
            if(i==n-1 and first_element==1){
                ans = max(ans, f(i + 1, 1, first_element));//ai element ta taile nite parbona
            }
            else{
                ans = max(ans, f(i + 1, 1, first_element) + a[i]);
            }
            
        }
    }
    return ans;
 }
void solve(int test) {
    cout << "Case " << test << ": ";
    memset(dp, -1, sizeof dp);
    cin>>n;
    cin(a,n);
    cout << f(0, 0, 0) << "\n";
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
