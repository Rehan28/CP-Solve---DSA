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
    string s;
    cin >> s;
    if(n==2){
        int x = stoi(s);
        cout << x << "\n";
        return;
    }
    int c = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            c++;
        }
    }
    if(c>0 and n>3){
        cout << 0 << "\n";
    }
    else if(n==3 and (s[0]=='0' or s[2]=='0')){
        cout << 0 << "\n";
    }
    else{
        int ans = INT_MAX;
        for (int i = 0; i < n - 1;i++){
            string ss = "";
            ss += s[i];
            ss += s[i + 1];
            int sum = stoi(ss);
            for (int j = 0; j < n;j++){
                if(j==i or j==i+1){
                    continue;
                }
                int x = s[j] - '0'; 
                if(sum==1){
                    sum *= x;
                }
                else if(x!=1){
                    sum += x;
                }
               
            }
            ans = min(sum, ans);
        }
        cout << ans << "\n";
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
