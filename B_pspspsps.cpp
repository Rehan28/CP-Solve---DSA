#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
#define mod 1000000007

int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int t=1;t<=test;t++) {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int cp = 0;
        int cs = 0;
        int cd = 0;
        for (int i = 0; i < n;i++){
            if(s[i]=='s'){
                cs++;
            }
            else if(s[i]=='p'){
                cp++;
            }else{
                cd++;
            }
        }

        if(cp+cd==n or cs+cd==n or cd==n or (cs==1 and s[0]=='s') or (cp==1 and s[n-1]=='p')){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
