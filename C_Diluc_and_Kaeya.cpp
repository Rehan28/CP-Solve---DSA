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
#define dd long double

void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;
    int d = 0;
    int k = 0;
    map<pair<int,int>, int> mp;
    for (int i = 0; i < n;i++){
        if(s[i]=='D'){
            d++;
        }
        else{
            k++;
        }
        //ratio int a ber korar jonno ata use kora jay
        int x = __gcd(d, k);
        int dx = d / x;
        int kx = k / x;


        mp[{dx,kx}]++;
        cout << mp[{dx,kx}] << " ";
    }
    cout << "\n";
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
