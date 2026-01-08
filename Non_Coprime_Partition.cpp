#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e6 + 9;
bool f[N];

void solve(int test) {
    int n;
    cin>>n;

    int sum = (n * (n + 1)) / 2;

    for (int i = 2; i <= n;i++){
        if((sum-i)%i==0){
            cout << "Yes\n";
            cout << 1 << " " << i << "\n";
            cout << n - 1 << " ";
            for (int j = 1; j <= n;j++){
                if(j!=i){
                    cout << j << " ";
                }
            }

            cout << "\n";
            return;
        }
    }

    cout << "No\n";

    // vector<int> v;
    // vector<int> v1;

    // if(n==1){
    //     cout << "NO\n";
    //     return;
    // }
    // v.push_back(1);
    // for (int i = 2; i <= n;i++){
    //     if(!f[i]){
    //         int c = 0;
    //         v.push_back(i);
    //         for (int j = i; j <= n;j=j+i){
    //             f[i] = true;
    //             v1.push_back(j);
    //             c++;
    //         }
    //         if(c==0){
    //             cout << "NO\n";
    //             return;
    //         }
    //     }
    // }

    // cout << "YES\n";
    // cout << v.size() << " ";
    // for (int i = 0; i < v.size();i++){
    //     cout << v[i] << " ";
    // }
    // cout << "\n";
    // cout << v1.size() << " ";
    // for (int i = 1; i < v1.size();i++){
    //     cout << v1[i] << " ";
    // }
    // cout << "\n";
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
