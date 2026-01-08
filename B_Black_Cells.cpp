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
    int n;
    cin>>n;
    int a[n+1];
    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int x = (n + 1) / 2;
    bool f = false;
    if(n%2){
        f = true;
    }
    for (int i = 1; i <= x;i++){
        set<int> st;
        for (int j = 1; j+i <= n;j++){
            int xx = a[j + i] - a[j];
            st.insert(xx);
        }
        for(auto y : st){
            //dbg(y);
            int c = 0;
            for (int j = 1; j + i <= n;j++){
                int gap = a[j + i] - a[j];
                if(gap==y){
                    continue;
                }
                else if(j!=1 and j+i+1<=n){
                    int gap1 = a[j + i + 1] - a[j + 1];
                    if(gap1==y){  
                        i++;
                        continue;
                    }
                    else{
                        //dbg(j);
                        c++;
                    }
                  
                }
                else{
                    //dbg(j);
                    c++;
                }   
            }
            if(c<=1){
                cout << y << "\n";
                return;
            }
        }
    }
    cout << 1 << "\n";
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
