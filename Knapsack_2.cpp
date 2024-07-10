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

const int N = 105;
const ll inf = 1e11 + 9;
int w[N], v[N];
int n,capacity;
ll dp[N][100005];

ll f(int i,int value){
    // O(n * n * 100)
    //  n = 100 and value = 1e5 amne (n*1e3);
    if(i==n){
        if(value==0){
            // value 0 mane ai route a aste aste value ses hoiche that means 
            // ai value possible
            // jehetu akhane weight nai toh 0
            return 0;
        }
        else{
            // possible na
            return inf;
        }
    }
    ll &ans = dp[i][value];
    if(ans!=-1){
        return ans;
    }
    ans = f(i + 1, value);
    ans = min(ans, w[i] + f(i + 1, value - v[i]));
    // weight ta nebo and total value theke aitar value bad debo
    return ans;
}

ll ff(int i,int value){
    if(i==-1){
        if(value==0){
            return 0;
        }
        else{
            return inf;
        }
    }
    ll &ans = dp[i][value];
    if(ans!=-1){
        return ans;
    }
    ans = ff(i - 1, value);
    ans = min(ans, w[i] + ff(i - 1, value - v[i]));
    return ans;
}

void solve(int test) {
    cin>>n>>capacity;
    for (int i = 0; i < n;i++){
        cin >> w[i] >> v[i];
    }
    //1 theke n porjonto possible kina
    // memset(dp, -1, sizeof dp);
    // for (int predicted_value = n * 1000; predicted_value > -1;predicted_value--){
    //     // akhane predicted_value ta total v ar sum dia o kora jay
    //     if(f(0,predicted_value)<=capacity){
    //         // ata O(1) a kaj kore
    //         // akbar dp build hoia gache 
    //         // atar jonno memset baire kaj kore
    //         cout << predicted_value << "\n";
    //         break;
    //     }
    // }

    // i theke 0 porjonto possible kina
    memset(dp, -1, sizeof dp);
    for (int predicted_value = n * 1000; predicted_value > -1;predicted_value--){
        if(ff(n-1,predicted_value)<=capacity){
            cout << predicted_value << "\n";
            break;
        }
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
