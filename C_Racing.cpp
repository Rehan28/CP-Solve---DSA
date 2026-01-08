#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
//#define int long long

const int N = 2e6+5;
int a[N];
int r[N], l[N];
map<pair<int,int>,bool> dp;

int n;

bool f(int i,int h){
    
    if(i==n){
        return true;
    }
    
    int ans = false;
    if(dp.find({h,i}) != dp.end()){
        return true;
    }
    if(a[i]==-1){
        if(h>=l[i] and h<=r[i]){
            ans = f(i+1,h);
            if(ans==1){
                a[i] = 0;
            }
        }
        if((h+1)>=l[i] and (h+1)<=r[i]){
            ans = f(i+1,h+1);
            if(ans==1){
                a[i] = 1;
            }
        }
    }
    if(a[i]==0 and h>=l[i] and h<=r[i]){
        ans = f(i+1,h);
    }
    if(a[i]==1 and (h+1)>=l[i] and (h+1)<=r[i]){
        ans = f(i+1,h+1);
    }
    return dp[{h,i}] = ans;
}


void solve(int test) {
    cin>>n;
    cin(a,n);

    for (int i = 0; i < n;i++){
        cin>>l[i]>>r[i];
    }
    if(f(0, 0)){
        for (int i = 0; i < n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else{
        cout << -1 << "\n";
    }
    dp.clear();
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
