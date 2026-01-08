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
    string s1, s2;
    cin >> s1 >> s2;
    n = s1.size();
    int m = s2.size();
    int j = 0;
    for (int i = 0; i < n;i++){
        if(s1[i]==s2[j]){
            j++;
        }
        else if(s1[i]=='?'){
            s1[i] = s2[j];
            j++;
        }
        if(j==m){
            yes;
            for (int i = 0; i < n;i++){
                if(s1[i]=='?'){
                    cout << 'a';
                }
                else{
                    cout << s1[i];
                }
            }
            cout << "\n";
            return;
        }
    }
    no;
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
