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

const int N = 1e5 + 9;

void solve(int test) {
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n + 1);
    vector<int> pos[N];
    for (int i = 1; i <= n;i++){
        pos[b[i]].push_back(i);
    }
    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        int f = true;
        for(auto p : pos[a[i]]){
            if(abs(i-p)%2==0 and mp[p]==0){
                mp[p] = a[i];
                f = false;
            }
            else if((abs(i-p))%2==0){
                int x = mp[p];
                mp[p] = a[i];
                int sz = pos[a[i]].size();
                int y = 2;
                while (1)
                {
                    if(p+y<=pos[a[i]][sz-1] and mp[p+y]==0){
                        f = false;
                        mp[p + y] = x;
                        break;
                    }
                    else if(p+y>pos[a[i]][sz-1]){
                        no;
                        return;
                    }
                    y += 2;
                }
                
              
            }
        }
        if(f){
            no;
            return;
        }
    }
    yes;
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
