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
    n *= 2;
    int a[n];
    cin(a,n);

    sort(a, a + n, greater<int>());
    vector<int> v;

    map<int, int> mp;

    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n/2;i++){
        sum += a[i];
        mp[a[i]]++;
    }

    for (int i = n/2; i < n;i++){                       
        sum1 += a[i];
        mp[a[i]]++;
    }

    int x = sum - sum1;
    if(mp[x]==0){
        cout << x << " ";
        int y = n / 2;
        for (int i = 0; i < n/2;i++){
            cout << a[i] << " " << a[y]<<" ";
            y++;
        }
        cout << "\n";
    }
    else{
        
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
