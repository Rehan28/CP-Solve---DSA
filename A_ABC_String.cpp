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

bool f(int a,int b,int c,string s){
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='A'){
            sum += a;
        }
        else if(s[i]=='B'){
            sum += b;
        }
        else{
            sum += c;
        }
        if(sum<0){
            break;
        }
    }
    if(sum==0){
        return true;
    }
    return false;
}

void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();
    if(f(1,1,-1,s) or f(1,-1,1,s) or f(-1,1,1,s)){
        yes;
        return;
    }
    else if(f(-1,-1,1,s) or f(-1,1,-1,s) or f(1,-1,-1,s)){
        yes;
        return;
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
