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

bool ok(string ss){
    for (int i = 0; i < ss.size();i++){
        if(ss[i]=='0'){
            return false;
        }
    }
    return true;
}

void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;
    int k = n;
    while(k>0){
        string ss = s;
        int c[n+1] = {0};
        if(k-1>n-1){
           if(ok(ss)){
               cout << k << "\n";
               return;
           }
            k--;
            continue;
        }
        if(ss[0]=='0'){
            c[0] = 1;
            c[k] = -1;
            ss[0] = '1';
        }
        for (int i = 1; i < n;i++){
            c[i] += c[i - 1];
            int x = i + k - 1;
            if(c[i]%2){
                if(ss[i]=='0'){
                    ss[i] = '1';
                }
                else{
                    ss[i] = '0';
                    if(x<n){
                        ss[i] = '1';
                        c[i]++;
                        c[x+1] = -1;
                    }
                }
            }
            else{
                if(ss[i]=='1'){
                    ss[i] = '1';
                }
                else{
                    ss[i] = '0';
                    if(x<n){
                        ss[i] = '1';
                        c[i]++;
                        c[x+1] = -1;
                    }
                }
            }
        }
        if(ok(ss)){
            cout << k << "\n";
            return;
        }
        k--;
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
