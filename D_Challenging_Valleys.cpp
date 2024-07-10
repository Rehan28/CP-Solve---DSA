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
    int c = 0;
    for (int i = 0; i < n - 1;i++){
        if(a[i]>a[i+1]){
            break;
        }
        else if(a[i]<a[i+1]){
            c++;
            break;
        }
    }
    int x = 0;
    for (int i = 0; i < n-1;i++){
        if(a[i]>a[i+1] and x==0){
            x = 1;
        }
        else if(a[i]<a[i+1] and x==1){
            c++;
            x = 0;
        }
    }
    for (int i = n-1; i > 0;i--){
        if(a[i]>a[i-1]){
            break;
        }
        else if(a[i]<a[i-1]){
            c++;
            break;
        }
    }
    bool f = true;
    for (int i = 0; i < n-1;i++){
        if(a[i]!=a[i+1]){
            f = false;
        }
    }
        if (c == 1 or f)
        {
            yes;
        }
        else{
        no;
    }
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
