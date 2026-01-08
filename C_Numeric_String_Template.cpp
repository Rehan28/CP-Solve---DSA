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
    int a[n];
    cin(a,n);
    map<int, int> val;
    int b[n + 1] = {0};
    int x = 1;
    for (int i = 0; i < n;i++){
        if(val[a[i]]==0){
            val[a[i]] = x;
            b[i] = x;
            x++;
        }
        else{
            b[i] = val[a[i]];
        }
    }
    int m;
    cin >> m;
    while(m--){
        string s;
        cin >> s;
        if(n!=s.size()){
            no;
            continue;
        }
        n = s.size();
        map<int, int> val1;
        int b1[n + 1] = {0};
        x = 1;
        bool f = true;
        for (int i = 0; i < n;i++){
            int y = s[i] - 'a';
            if(val1[y]==0){
                val1[y] = x;
                b1[i] = x;
                x++;
            }
            else{
                b1[i] = val1[y];
            }
            if(b[i]!=b1[i]){
                f = false;break;
            }
        }
        if(f){
            yes;
        }
        else{
            no;
        }
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
