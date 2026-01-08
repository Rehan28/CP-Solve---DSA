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
    cin(b, n);
    int x = 1;
   int mp[n+1];
   int  mp1[n+1];
    int j1 = n - 1;
    for (int i = 0; i < n / 2;i++){
        mp[a[i]] = x;
        mp1[b[i]] = x;
        mp[a[j1]] = x;
        mp1[b[j1]] = x;
        x++;
        j1--;
    }
    if(n%2){
        mp[a[n/2]] = x;
        mp1[b[n/2]] = x;
    }

    int i = 0, j = n - 1;
    int ii = 0, jj = n - 1;
    while(n>1){
        if(mp1[a[i]]>=mp1[a[j]]){
            mp[a[i]] = 0;
            i++;
        }
        else{
            mp[a[j]] = 0;
            j--;
        }
        if(mp[b[ii]]<=mp[b[jj]]){
            mp1[b[ii]] = 0;
            ii++;
        }
        else{
            mp1[b[jj]] = 0;
            jj--;
        }
        n--;
    }
    if(a[i]==b[ii]){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
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
