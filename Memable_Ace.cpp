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
    string s;
    cin >> s;
    n = s.size();
    map<char, int> mp;
    map<char, int> mp1;
    for (int i = 0; i < n;i++){
        if(mp[s[i]]==0){
            mp[s[i]] = i+1;
        }
        mp1[s[i]] = i+1;
    }
    int ans = 0;
    for (char i = 'a'; i <= 'z';i++){
        for (char j = 'a'; j <= 'z';j++){
            if(i!=j and mp[i]!=0 and mp1[j]!=0){
                int x = mp1[j] - mp[i];
                ans = max(ans, x);
            }
        }
    }
    cout << ans << "\n";
}
int main() {
    //Muku28(); 
    freopen("max-pair.in", "r", stdin);
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
