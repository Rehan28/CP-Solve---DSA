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

int n;
bool f(int x,int y,int mp){
    if (x>n or y>n or x<=0 or y<=0 or mp==1){
        return false;
    }
   // cout << x << " " << y << "\n";
    return true;
}

void solve(int test) {
    int p;
    cin >> n >> p;
    int ans = n*n;
    ans -= p;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < p; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[{a, b}] = 1;
        int x = a + 2;
        int y = b + 1;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a + 1;
        y = b + 2;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a - 1;
        y = b + 2;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }
        
        x = a - 2;
        y = b + 1;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a - 2;
        y = b - 1;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a - 1;
        y = b - 2;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a + 1;
        y = b - 2;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }

        x = a + 2;
        y = b - 1;
        if(f(x, y, mp[{x, y}])){
            ans--;
            mp[{x, y}] = 1;
        }
        //dbg(ans);
    }
    cout << ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
