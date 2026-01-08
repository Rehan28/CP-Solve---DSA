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
    int a, b;
    cin >> a >> b;
    b--;
    vector<int> v;
    while (b--){
        int x = 2;
        bool f = false;
        while (x<=sqrt(a)+1){
            if(a%x==0){
                v.push_back(x);
                f = true;
                a /= x;
                break;
            }
            x++;
        }
        if(f==false or a==1){
            cout << -1 << "\n";
            return;
        }
        
    }
    v.push_back(a);
    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
