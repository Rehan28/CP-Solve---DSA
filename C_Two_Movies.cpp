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
    int b[n];
    cin(b,n);
    vector<int> wait;

    int val_a = 0;
    int val_b = 0;
    for (int i = 0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]>b[i]){
                val_a += a[i];
            }
            else{
                val_b += b[i];
            }
        }
        else{
            wait.push_back(a[i]);
        }
    }
    for(auto x : wait){
        if(x==1){
            if(val_a<=val_b){
                val_a++;
            }
            else{
                val_b++;
            }
        }
        else{
            if(val_a>=val_b){
                val_a += x;
            }
            else{
                val_b += x;
            }
        }
    }
    cout << min(val_a, val_b) << "\n";
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
