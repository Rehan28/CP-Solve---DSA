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
    int n,m;
    cin>>n>>m;
    string s[n];
    map<int, int> mp;
    map<int, int> mp1;
    map<int, int> mp2;
    map<int, int> mp3;
    for (int i = 0; i < n;i++){
        cin >> s[i];
        for (int j = 0; j < m;j++){
            if(s[i][j]=='W'){
                mp[j] = 1;
                mp1[i] = 1;
            }
            else{
                mp2[j] = 1;
                mp3[i] = 1;
            }
        }
    }
    if((mp[0]==1 and mp[m-1]==1 and mp1[0]==1 and mp1[n-1]) or (mp2[0]==1 and mp2[m-1]==1 and mp3[0]==1 and mp3[n-1])){
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
