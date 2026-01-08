#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 1; i < n;i++){
        int j = i;
        while(j>0){
            int x = s[j] - '0';
            int y = s[j-1] - '0';
            x--;
            
            if(x>y){
                x *= 10;
                string ss = to_string(x);
                s[j] = ss[0];
                swap(s[j], s[j - 1]);
            }
            else{
                break;
            }
            j--;
        }
    }
    cout << s << "\n";
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
