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

int n = 10;
int dp[11][11][11][11];


int ff(int x,int i,int j,int k){
    if(x==n){
        return 0;
    }
    int baki = n - x;
    int val = i + j + k;
    int &ans = dp[x][i][j][k];
    if(ans!=-1){
        return ans;
    }
    for (int ii = 0; ii < 2;ii++){
        if(i==0 and ii==1){
            continue;
        }
        if(i==baki and ii==0){
            continue;
        }
        for (int jj = 0; jj < 2;jj++){
            if(j==0 and jj==1){
                continue;
            }
            if(j==baki and jj==0){
                continue;
            }
            for (int kk = 0; kk < 2;kk++){
                if(k==0 and kk==1){
                   continue;
                }
                if(k==baki and kk==0){
                   continue;
                }
                int xx = i, yy=j, zz=k;
                int c = 0;
                if(ii==1){
                    xx = i - 1;
                    c++;
                }
                if(jj==1){
                    yy = j - 1;
                    c++;
                }
                if(kk==1){
                    zz = k - 1;
                    c++;
                }
                if(c%2){
                    ans = max(ans, 1 + ff(x + 1, xx, yy, zz));
                }
                else{
                    ans = max(ans, ff(x + 1, xx, yy, zz));
                }
               
            }
        }
    }
    return ans;
}

void solve(int test) {
    
    string a[3];
    cin >> a[0] >> a[1] >> a[2];
    map<int, int> mp;
    int pos = 0;
    bool f = false;
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < n;j++){
            if(a[i][j]=='1'){
                 mp[i]++;
            }
        }
    }
    memset(dp, -1, sizeof dp);
    int val = ff(0, mp[0], mp[1], mp[2]) ;
    for (int i = 0; i < val;i++){
        cout << 1;
    }
    for (int i = val; i < 10;i++){
        cout << 0;
    }

    cout << "\n";
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
