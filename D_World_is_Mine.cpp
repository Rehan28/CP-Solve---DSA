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
const int N = 5003;
int n,x;
int a[N];
vector<int> v;
int mp[N];
int dp[N][N];

int f(int i,int free){
    if(i==x){
        return 0;
    }
    int &ans = dp[i][free];
    if(ans!=-1){
        return ans;
    }
    ans = f(i + 1, free+1);
    int x = free - mp[v[i]];
    if(x>=0){
        ans = max(ans, f(i + 1, x)+1);
    }
    return ans;
}

void solve(int test) {

    cin>>n;
    cin(a,n);
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= n;j++){
            dp[i][j] = -1;
        }
    }
    sort(a, a + n);
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    for (int i = 0; i < 5001;i++){
        if(mp[i]!=0){
            v.push_back(i);
        }
    } 
    x = v.size();
    cout << x - f(0, 0) << "\n";
    v.clear();
    for (int i = 0; i < n;i++){
        mp[a[i]] = 0;
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
