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
#define int long long

const int N = 1e5 + 9;
int pfx[N];
int pfx1[N];
int val[N];
int vis[N];
map<int, int> mp;
void pre(){
    pfx[1] = 0;
    int a[N];
    for (int i = 2;i<N;i++){
        if(!vis[i]){
            int x = 1;
            a[i] = 1;
            val[i] = 0;
            for (int j = i * i; j < N; j = j * j){
                vis[j] = true;
                val[j] = x;
                //dbg(j);
                x++;
            }  
        }
        else{
            a[i] = 0;
            //val[i] = 0;
        }
    }
    for (int i = 1; i < N;i++){
        pfx[i] = pfx[i - 1] + a[i];
    }
    pfx1[0] = 0;
    for (int i = 1; i < N;i++){
        pfx1[i] = pfx1[i - 1] + val[i];
        //dbg(pfx1[i]);
    }
}

void solve(int test) {
    int n;
    cin>>n;
    //dbg(pfx1[n]);
    int ans = 1 + (pfx[n]) * n;
    cout << ans+ pfx1[n] << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    pre();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
