#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> d;
    for (int i = 2; i <= n;i++){
        if(n % i == 0){
            d.push_back(i);
        }
    }

    int x = n * m;
    if(x==k){
        int c = 1;
        for (int i = 0; i < n;i++){
            for (int j = 0;j < m;j++){
                cout << c << " ";
                c++;
            }
            cout << "\n";
        }
    }
    else{

        int ans[n][m];
        int c = 0;
        if(n>=k and n%k==0){
            
            for (int i = 0; i < m;i++){
                for (int j = 0;j < n;j++){
                    ans[j][i] = c;
                    c++;
                    if(c==k){
                        c = 0;
                    }
                }

                for (int j = 0;j < n;j++){
                    ans[j][i] = c;
                    c--;
                    if(c==0){
                        c = k;
                    }
                }
            }
           
        }
        else if(k>=n and k%n==0){
            for (int i = 0; i < m;i++){
                for (int j = 0;j < n;j++){
                    ans[j][i] = c;
                    c++;
                    if(c==k){
                        c = 0;
                    }
                }

                for (int j = 0;j < n;j++){
                    ans[j][i] = c;
                    c--;
                    if(c==0){
                        c = k;
                    }
                }
            }
        }
        else if(k>=m and k%m==0){
            for (int i = 0; i < m;i++){
                for (int j = 0;j < n;j++){
                    ans[i][j] = c;
                    c++;
                    if(c==k){
                        c = 0;
                    }
                }

                for (int j = 0;j < n;j++){
                    ans[i][j] = c;
                    c--;
                    if(c==0){
                        c = k;
                    }
                }
            }
        }
        else if(m>=k and m%k==0){
            for (int i = 0; i < m;i++){
                for (int j = 0;j < n;j++){
                    ans[i][j] = c;
                    c++;
                    if(c==k){
                        c = 0;
                    }
                }

                for (int j = 0;j < n;j++){
                    ans[i][j] = c;
                    c--;
                    if(c==0){
                        c = k;
                    }
                }
            }
        }

        for (int i = 0; i < n;i++){
            for (int j = 0;j < m;j++){
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
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
