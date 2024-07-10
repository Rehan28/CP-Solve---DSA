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
    if((a[n-2]-a[0])!=0){
        yes;
        string s = "";
        for (int i = 0; i < n-1;i++){
            s += 'R';
        }
        s += 'B';
        cout << s << "\n";
    }
    else if((a[n-1]-a[1])!=0){
        yes;
        string s = ""; 
        s += 'B';
        for (int i = 0; i < n-1;i++){
            s += 'R';
        }
        cout << s << "\n";
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
