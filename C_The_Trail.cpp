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
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    int a[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }

    vector<pair<int, int>> path;
    map<pair<int, int>, int> mp;
    int x = 0;
    int y = 0;
    path.push_back({x, y});
    for (int i = 0; i < s.size();i++){
        if(s[i]=='R'){
            mp[{x, y}] = 1;
        }
        if(s[i]=='D'){
            x++;
        }
        else{
            y++;
        }
        path.push_back({x, y});
    }

    int sum[n];
    int sum1[m];
    for (int i = 0; i < n;i++){
        sum[i] = 0;
        for (int j = 0; j < m;j++){
            sum[i] += a[i][j];
        }
    }

    for (int j = 0; j < m;j++){
        sum1[j] = 0;
        for (int i = 0; i < n;i++){
            sum1[j] += a[i][j];
        }
    }

    for (int i = 0; i < path.size();i++){
        x = path[i].first;
        y = path[i].second;
        int pos = mp[{x, y}];
        if(pos==1){
            a[x][y] = -(sum1[y]);
            sum1[y] += a[x][y];
            sum[x] += a[x][y];
        }
        else{
            a[x][y] = -(sum[x]);
            sum1[y] += a[x][y];
            sum[x] += a[x][y];
        }

    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
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
