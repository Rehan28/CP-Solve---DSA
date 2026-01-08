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


const int N = 2e5 + 9; 
int a[N];
vector<int> g[N];

bool f(int u,int x,int parent){
    int s = g[u].size();
    if(s==0 and a[u]<x){
        return false;
    }
    else if(a[u]<x){
        x += (x - a[u]);
    }
    if(x>2e9){
        return false;
    }
    for(auto v : g[u]){
        if(v!=parent){
            if(f(v,x,parent)==false){
                return false;
            }
        }
    }
    return true;
}

void solve(int test) {
    int n;
    cin>>n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    for(int i=2;i<=n;i++){
        int x;
        cin >> x;
        g[x].push_back(i);
    }
    int lo = 0;
    int hi = *max_element(a+1, a + n+1);
    while (lo<hi) {
		int mid = (lo+hi+1) / 2;
        bool ff = true;
        
        for(auto v : g[1]){
            if(f(v,mid,1)==false){
                ff = false;
                break;
            }
        }
		if (ff) {
            lo = mid;
		} else {
			hi = mid - 1;
		}
	}
    cout << a[1]+lo << "\n";
    for (int i = 0; i <=n;i++){
        g[i].clear();
        a[i] = 0;
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
