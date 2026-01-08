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

    int x = 1;
    int i = 0;
    int j = n - 1;
    while(i<=j){
        if(a[i]==x){
            i++;
            x++;
        }
        else if(a[j]==x){
            j--;
            x++;
        }
        else{
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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
