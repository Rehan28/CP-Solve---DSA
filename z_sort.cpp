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
    sort(a, a + n);
    vector<int> ans;
    int j = n / 2;
    if(n%2){
        j++;
    }
    for (int i = 0; i < n / 2;i++){
        ans.push_back(a[i]);
        ans.push_back(a[j]);
        j++;
    }
    if(n%2){
        ans.push_back(a[n / 2]);
    }
    for(int i = 0; i < n-1;i++){
        if(i%2==0 and ans[i]>a[i+1]){
            cout << "IMPOSSIBLE\n";
            return;
        }
    }
    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
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
