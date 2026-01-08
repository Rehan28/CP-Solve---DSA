#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    vector<int> v;
    for (int i = 0; i < n - 1;i++){
        if(a[i]==a[i+1]){
            v.push_back(a[i]);
            i++;
        }
    }
    if(v.size()<4){
        no;
    }
    else{
        yes;
        int m1 = v[0];
        int m2 = v[1];
        n = v.size();
        int m3 = v[n-2];
        int m4 = v[n - 1];

         cout << m1 << " " << m2 << " " << m3 << " " << m2 << " " << m1 << " " << m4 << " " << m3 << " " << m4 << "\n";

        // int x = abs((m2 - m1) * (m4 - m3));
        // int y = abs((m3 - m1) * (m4 - m2));
        // int z = abs((m4 - m1) * (m3 - m2));
        // yes;
        // if(x>y and x>z){
        //     cout << m1 << " " << m3 << " " << m2 << " " << m3 << " " << m1 << " " << m4 << " " << m2 << " " << m4 << "\n";
        // }
        // else if(y>x and y>z){
        //     cout << m1 << " " << m2 << " " << m3 << " " << m2 << " " << m1 << " " << m4 << " " << m3 << " " << m4 << "\n";
        // }
        // else{
        //     cout << m1 << " " << m2 << " " << m4 << " " << m2 << " " << m1 << " " << m3 << " " << m4 << " " << m3 << "\n";
        // }

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
