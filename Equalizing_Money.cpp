#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;
#define mod 1000000007

const int N = 1e5+9;
vector<int> g[N];
bool vis[N];
int money;
int person;
int a[N];

void dfs(int u){
    vis[u] = true;
    person++;
    money += a[u];
    for (auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int test) {
    for (int i = 0; i < N;i++){
        vis[i] = false;
        a[i] = 0;
        g[i].clear();
    }
    cout << "Case " << test << ": ";
    int n, m;
    cin>>n>>m;
    ll sum = 0;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        sum += a[i];
    } 
    while(m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(sum%n){
        no;
        return;
    }
    sum /= n;
    
    set<int> st;
    for (int i = 1; i <= n;i++){
        money = 0;
        person = 0;
        if(!vis[i]){
           dfs(i);
           if(money%person==0){
               st.insert(money / person);
            } 
            else{
                no;
                return;
            }  
        }
    }
    if(st.size()==1){
        yes; 
    }
    else{
        no;
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
