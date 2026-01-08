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
#define int long long

void solve(int test) {
    int n,k;
    cin >> n >> k;

    int ans = 0; 
    string s = to_string(n);
    reverse(s.begin(), s.end()); 
    int x = s.size();
    int t = 100;
    while (1){  
        int sum = 0;
        for (int i = 0; i < x;i++){
            sum += s[i] - '0';
        }
        if(sum<=k){
            break;
        }
        for (int i = 0; i < x;i++){
            if(s[i]!='0'){
                int val = 1;
                for (int j = 0; j < i;j++){
                    val *= 10;
                }
                for (int j = i; j < x;j++){
                    if(s[j]=='9' and j==x-1){
                        s[j] = '0';
                        s += '1';
                        x++;
                        break;
                    }
                    else if(s[j]=='9'){
                        s[j] = '0';
                    }
                    else{
                        s[j]++;
                        break;
                    }
                }
                ans += val;
                break;
            }
        }
    }
    cout << ans << "\n";
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
