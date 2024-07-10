#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 100000007

const int N = 100;
int a[N];
int b[N];
int n, k;
int dp[N][1009];

int way(int i,int value){
    if(i==n){
        if(value==k){
            return 1;
        }
        return 0;
    }
    if(value>k){
        return 0;
    }
    int sum = value;
    int &ans = dp[i][value];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for (int j = 0; j <= b[i];j++){
        ans += way(i + 1, sum);
        //ans %= mod; ata ar nice ata same just time bace aktu 
        // mod aktu slow + - ar cyay
        if(ans>=mod){
            ans -= mod;
        }
        sum += a[i];
    }
    return ans;
}

void solve(int test) {
    cout << "Case " << test << ": ";
    memset(dp, 0, sizeof dp);
    cin>>n>>k;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    //cout << way(0, 0) << "\n";
    dp[n][k] = 1;
    for (int i = n - 1; i > -1;i--){
        for (int value = 0; value <= k;value++){
            int sum = value;
            int &ans = dp[i][value];
            ans = 0;
            //bichon dia kortechi
            /*karon amar porerta lagteche
             i ar jonno dakhtechi all possible value and i ar sum tao add kore dakhtechi
             then dakhtechi i+1 a amon kono possible ans ache kina ,, i+1 a 0 ta niao akta ans
             ache jodi ota na nei.
            */
            for (int j = 0; j <= b[i];j++){
                if(sum<=k){
                    ans += dp[i + 1][sum];
                    if(ans>=mod){
                        ans -= mod;
                    }
                }  
                sum += a[i]; 
            }
        }
    }
    cout << dp[0][0]  << "\n";
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
