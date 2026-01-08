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
    int a[n];
    cin(a,n);

    vector<int> v;
    int c = 0;
    if(n==1){
        n--;
        v.push_back(1);
    }
    for (int i = 0; i < n;i++){
        if(a[i]==1 and i!=0 and i!=n-1){
            v.push_back(c);
            c = 0;
        }
        else if(a[i]==1 and i==n-1){
            v.push_back(c);
            v.push_back(1);
        }
        else if(i==n-1){
            v.push_back(c+1);
        }
        c++;
    }

    cout<<v.size()<<"\n";
    for(int i = 0; i < v.size();i++){
        cout << v[i] << " ";
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
