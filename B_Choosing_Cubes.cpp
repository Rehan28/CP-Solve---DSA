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
    int n,ff,k;
    cin>>n>>ff>>k;
    vector<int> v;
    int x;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        v.push_back(a);
        if(i==ff-1){
            x = a;
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    bool f = false;
    for (int i = 0; i < k;i++){
        if(v[i]==x){
            if(k!=n and v[k]==x){
                cout << "MAYBE\n";
                return;
            }
            else{
                yes;
                return;
            }
        }
    }
    no;
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
