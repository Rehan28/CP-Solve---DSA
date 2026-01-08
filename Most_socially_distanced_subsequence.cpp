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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    bool f = 0;
    vector<int> ans;
    ans.push_back(a[0]);
    if(a[0]<a[1]){
        f = 1;
    }
    for (int i = 1; i < n - 1;i++){
        if(f==1 and a[i]>a[i+1]){
            f = 0;
            ans.push_back(a[i]);
        }
        else if(f==0 and a[i]<a[i+1]){
            f = 1;
            ans.push_back(a[i]);
        }
    }
    ans.push_back(a[n - 1]);
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
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
