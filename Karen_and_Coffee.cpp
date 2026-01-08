#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define int long long
const int N = 2e5 + 9;
int a[N];
void solve(int test) {
    int n,k,q;
    cin >> n >> k >> q;

    for (int i = 0; i < n;i++){
        int x,y;
        cin >> x >> y;
        a[x]++;
        a[y + 1]--;
    }

    for (int i = 1; i < N;i++){
        a[i] += a[i - 1];
    }

    for (int i = 1; i < N;i++){//pfx
        if(a[i]>=k){
            a[i] = a[i - 1] + 1;
        }
        else{
            a[i] = a[i - 1];
        }
    }
    while (q--){
        int x, y;
        cin >> x >> y;
        cout << a[y] - a[x - 1] << "\n";
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
