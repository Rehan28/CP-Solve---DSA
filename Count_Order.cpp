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
    vector<int> a;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<int> b;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
   

    vector<int> v;

    for (int i = 1; i <= n;i++){
        v.push_back(i);
    }

    int pos_a, pos_b, pos = 1;
    do{
        if(v==a){
            pos_a = pos;
        }
        if(v==b){
                pos_b = pos;
        }
        pos++;
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(pos_a - pos_b) << "\n";
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
