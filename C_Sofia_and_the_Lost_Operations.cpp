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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);
    int m;
    cin >> m;
    int d[m];
    cin(d, m);

    map<int, int> mp;
    map<int, int> mp1; 
    map<int, int> xt;
    for (int i = 0; i < n;i++){
        mp[b[i]]++;
    }
    for (int i = 0; i < m;i++){
        mp1[d[i]]++;
        xt[d[i]]++;
    }
   
    for (int i = 0; i < n;i++){
        if(a[i]!=b[i]){
            if(mp1[b[i]]!=0){
                mp1[b[i]]--;
            }
            else{
                no;
                return;
            }
        }
        else{
            if(mp1[b[i]]!=0){
                xt[b[i]] = -1;
            }
        }
    }
    bool f = true;
    for (int i = m-1; i>-1;i--){
        // dbg(d[i]);
        // dbg(mp1[d[i]]);
        // dbg(xt[d[i]]);
        if(mp1[d[i]]!=xt[d[i]]){
            
            break;
        }
        if(mp1[d[i]]==xt[d[i]]){
            f = false;
            break;
        }
    }
    if(f){
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
