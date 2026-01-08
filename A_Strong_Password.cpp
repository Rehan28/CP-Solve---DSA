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
    int c = 0;
    for (int i = 0;i<n-1;i++){
        if (s[i] == s[i + 1] and c==0)
        {
            cout << s[i];
            for (char j = 'a'; j <= 'z';j++){
                if(s[i]!=j){
                      cout << j;
                      break;
                }
            }
            c = 1;
        }
        else{
            cout << s[i];
        }
    }
    cout << s[n - 1];
    if(c==0){
        for (char j = 'a'; j <= 'z';j++){
            if(s[n-1]!=j){
                    cout << j;
                     break;
            }
        }
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
