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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int w = 0;
    int c = 0;
    for (int i = 0; i < n;i++){
        if(s[i]!='L'){
            int land = -1;
            int water = -1;
            for (int j = i; j < i+m;j++){
                if(j==n){
                    yes;
                    return;
                }
                if(s[j]=='W'){
                    water = j;
                }
                if(s[j]=='L'){
                    land = j;
                    break;
                }
            }
            if(land==-1){
                //dbg(water);
                if(water==-1){
                    no;
                    return;
                }
                else{
                    int y = k;
                    if(k==0){
                        no;
                        return;
                    }
                    bool f = true;
                    for (int j = water; j <= water+y;j++){
                        if(j==n){
                            yes;
                            return;
                        }
                        if(s[j]=='L'){
                            f = false;
                            i = j;
                            break;
                        }
                        if(s[j]=='C'){
                            no;
                            return;
                        }
                        k--;
                    }
                    if(f){
                        no;
                        return;
                    }
                }
               
            }
            else{
                i = land-1;
            }
        }
    }
    yes;
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
