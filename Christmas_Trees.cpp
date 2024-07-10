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
    int n,m;
    cin>>n>>m;
    int a[n];//tree position
    cin(a,n);
    queue<int> q;
    map<int, int> dis; // karon ader range 1e9;
    map<int, int> vis;
    for (int i = 0; i < n;i++){
        q.push(a[i]);
        vis[a[i]] = 1;
        dis[a[i]] = 0;
    }
    vector<int> ans;
    ll sum = 0;
    while(m){
        int u = q.front();
        q.pop();
        if(!vis[u+1]){
            q.push(u + 1);
            dis[u + 1] = dis[u]+1;//parent theke 1 basi
            vis[u + 1] = 1;
            ans.push_back(u + 1);
            sum += (dis[u + 1]);
            m--;
        }
        if(m==0){
            break;
        }
        if(!vis[u-1]){
            q.push(u - 1);
            dis[u - 1] = dis[u]+1;
            vis[u - 1] = 1;
            ans.push_back(u - 1); 
            sum += (dis[u - 1]);
            m--;
        }
        
    }
    cout << sum << "\n";
    m = ans.size();
    for (int i = 0; i < m;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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
