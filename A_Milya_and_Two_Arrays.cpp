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
    int b[n];
    cin(b, n);

    map<int, int> mp;
    map<int, int> mp1;
    map<int, int> val;
    int c = 0;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            int x = a[i] + b[j];
            if(val[x]==0 and mp[i]==0 and mp1[j]==0){
                val[x]++;
                mp[i]++;
                mp1[j]++;
                c++;
            }
        }
    }

        if (c>=3)
        {
            cout << "YES\n";
        }
        else{
        cout<<"NO\n";
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
