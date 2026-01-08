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

bool f(int pfx[11],string s){
    dbg(s);
    for (int j = 1; j + 4 <= 10;j++){
            int x = pfx[j + 4] - pfx[j - 1];
            bool f = true;
            for (int i = j; i <= j + 4;i++){
                if(s[i]=='O'){
                    f = false;
                    break;
                }
            }
            if(x==4 and f){
                for (int k = j - 1; k <= j + 4;k++){
                    if(k>10 or k<0){
                        continue;
                    }
                    if(s[k]=='.'){
                        dbg(k);
                        return true;
                    }
                }
            }
    }
    return false;
}


void solve(int test) {
    string s[10];
    for (int i = 0; i < 10;i++){
        cin >> s[i];
    }
    // for (int i = 0; i < 10;i++){
    //     int pfx[11];
    //     pfx[0] = 0;
    //     string ss = "!";
    //     for (int j = 1; j <= 10;j++){
    //         if(s[i][j-1]=='X'){
    //             pfx[j] = pfx[j - 1] + 1;
    //         }
    //         else{
    //             pfx[j] = pfx[j - 1];
    //         }
    //         ss += s[i][j - 1];
    //     }
    //     //dbg(ss);
    //     if(f(pfx,ss)){
    //         yes;
    //         return;
    //     }
    // }

    // //
    // for (int i = 0; i < 10;i++){
    //     int pfx[11];
    //     pfx[0] = 0;
    //     string ss = "!";
    //     for (int j = 1; j <= 10;j++){
    //         if(s[j-1][i]=='X'){
    //             pfx[j] = pfx[j - 1] + 1;
    //         }
    //         else{
    //             pfx[j] = pfx[j - 1];
    //         }
    //         ss += s[j-1][i];
    //     }
    //     if(f(pfx,ss)){
    //         yes;
    //         return;
    //     }
        
    // }
    
    //need diagonal
    //right to left
    for (int i = 0; i < 10;i++){
        int x = i;
        int pfx[11];
        pfx[0] = 0;
        string ss = "!";
        for (int j = 1; j <= 10;j++){
            if(s[x][j-1]=='X'){
                pfx[j] = pfx[j - 1] + 1;
            }
            else{
                pfx[j] = pfx[j - 1];
            }
            ss += s[x][j-1];
            x++;
            if(x>9){
                break;
            }
        }
        dbg(ss);
        if(f(pfx,ss)){
            yes;
            return;
        }
    }
    //upper right to left
    for (int i = 0; i < 9;i++){
        int x = 0;
        int pfx[11];
        pfx[0] = 0;
        string ss = "!";
        for (int j = i+2; j <= 10;j++){
            if(s[x][j-1]=='X'){
                pfx[j] = pfx[j - 1] + 1;
            }
            else{
                pfx[j] = pfx[j - 1];
            }
            ss += s[x][j-1];
            x++;
            if(x>9){
                break;
            }
        }
        if(f(pfx,ss)){
            yes;
            return;
        }
    }

    //left to right
    for (int i = 0; i < 10;i++){
        int x = i;
        int pfx[11];
        int pfx1[11];
        pfx1[0] = 0;
        int y = 1;
        pfx[10] = 0;
        string ss = "!";
        for (int j = 9; j > -1;j--){
            if(s[x][j]=='X'){
                pfx[j] = pfx[j + 1] + 1;
            }
            else{
                pfx[j] = pfx[j + 1];
            }
            ss += s[x][j];
            pfx1[y] = pfx[j];
            y++;
            x++;
            if(x>9){
                break;
            }
        }
        reverse(ss.begin(), ss.end());
        if(f(pfx1,ss)){
            yes;
            return;
        }
    }
    //
    for (int i = 0; i < 9;i++){
        int x = 0;
        int pfx[11];
        int pfx1[11];
        pfx1[0] = 0;
        int y = 1;
        pfx[10] = 0;
        string ss = "!";
        for (int j = 9-i-1; j>-1;j--){
            if(s[x][j]=='X'){
                pfx[j] = pfx[j + 1] + 1;
            }
            else{
                pfx[j] = pfx[j + 1];
            }
            ss += s[x][j];
            pfx1[y] = pfx[j];
            y++;
            x++;
            
            if(x>9){
                break;
            }
        }
        reverse(ss.begin(), ss.end());
        if(f(pfx1,ss)){
            yes;
            return;
        }
    }

    no;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
