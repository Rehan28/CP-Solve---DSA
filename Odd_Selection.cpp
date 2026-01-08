#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;
#define mod 1000000007

void solve(int test) {
    int n,x;
    cin >> n >> x;
    int a[n];
    cin(a,n);
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n;i++){
        if(a[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if(x%2==0){
        if(even==0){
            no;
            return;
        }
        even--;
        x--;
    }
    for (int i = 1; i <= x;i = i+2){
        if(odd>=i and even>=(x-i)){
            yes;
            return;
        }
    }
    no;
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
