#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    sort(a, a + n);
    
    map<int, int> p;

    for (int i = 0; i < n;i++){
        p[a[i]]++;
    }

    for (auto x : p){
        int v = x.first;
        int y = x.second;
        for (int i = 1; i < x.second;i = i+2){
            if(i==1){
                v++;
                continue;
            }
            else{
                p[v] += 2;
                v++;
            }
        }

        //dbg(y);
        p[x.first] = 0;

        if(y%2 and p[v]==0){
            cout << "No\n";
            return;
        }
        else if(x.second%2){
            p[v]++;
        }
    }
  
    
    cout << "Yes\n";
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
