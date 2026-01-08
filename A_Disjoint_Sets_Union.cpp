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

const int N = 1e6 + 9;

int parent[N];
int siz[N];

void make_set(int v){
    parent[v] = v;
    siz[v] = 1;
}

int find_set(int v){
    if(parent[v]==v)
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(siz[a]<siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}

void solve(int test) {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n;i++){
        make_set(i);
    }
    while(m--){
        string s;
        cin >> s;
        int a, b;
        cin >> a >> b;
        if(s=="union"){
            union_set(a, b);
        }
        else{
            if(find_set(a)==find_set(b)){
                yes;
            }
            else{
                no;
            }
        }
    }
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
