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
    int n,k;
    cin>>n>>k;
    string s;
    cin >> s;
    string ss[n];
    vector<string> v;
    for (int i = 1; i <= n;i++){
        ss[i - 1] = "";
        for (int j = 0; j < i;j++){
            ss[i - 1] += s[j];
        }
        while (ss[i-1].size()<k){
            ss[i - 1] += ss[i - 1];
        }
        v.push_back(ss[i - 1]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < k;i++){
        cout << v[0][i];
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
