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
    int sum = 0;
    vector<int> v;
    for (int i = 1; i <= n;i++){
        sum += i;
        int x = sum;
        int y = sqrt(x);
        if(y*y==x and i!=n){
            v.push_back(i+1);
            v.push_back(i);
            i++;
            sum += i;
        }
        else if(y*y==x and i==n){
            cout<<-1<<nl;
            return;
        }
        else{
            v.push_back(i);
        }
    }
    sum = 0;
    for(int i=0;i<v.size();i++){
        // sum += v[i];
        // int x = sum;
        // int y = sqrt(x);
        // if(y*y==x){
        //     dbg(sum);
        // }
        cout << v[i] << " ";
    }
    cout << nl;
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
