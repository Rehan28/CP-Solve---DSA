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
    string s;cin >> s;
    map<char,int> mp;
    bool f =false;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]>1){
        f=true;
        }
    }
    int x=mp['S']%2;
    int y=mp['N']%2;
    int z=mp['E']%2;
    int a=mp['W']%2;
    if((f and abs(x-y)==0 and abs(z-a)==0) or (x+y+z+a==4)){
        char ans[n];
        mp['S'] -= x;
        mp['N'] -= y;
        mp['E'] -= z;
        mp['W'] -= a;
        map<int, int> p;
        for (int i = 0; i < n;i++){
            if(s[i]=='S' and mp['S']!=0){
                if(mp['S']%2){
                    ans[i] = 'H';
                }
                else{
                    ans[i] = 'R';
                }
                mp['S']--;
            }
            else if(s[i]=='N' and mp['N']!=0){
                if(mp['N']%2){
                    ans[i] = 'H';
                }
                else{
                    ans[i] = 'R';
                }
                mp['N']--;
            }
            else if(s[i]=='W' and mp['W']!=0){
                if(mp['W']%2){
                    ans[i] = 'H';
                }
                else{
                    ans[i] = 'R';
                }
                mp['W']--;
            }
            else if(s[i]=='E' and mp['E']!=0){
                if(mp['E']%2){
                    ans[i] = 'H';
                }
                else{
                    ans[i] = 'R';
                }
                mp['E']--;
            }
            else{
                p[i] = 1;
            }
        }
        for(int i=0;i<n;i++){
            if(p[i]==1 and (s[i]=='N' or s[i]=='S')){
                ans[i] = 'R';
            }
            if(p[i]==1 and (s[i]=='W' or s[i]=='E')){
                 ans[i] = 'H';
            }
        }
        for (int i = 0; i < n;i++){
            cout << ans[i];
        }
        cout << "\n";
    }
    else{
        no;
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