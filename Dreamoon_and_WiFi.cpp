#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

int pos = 0;
string s, s1;
int n;
int total = 0;

int f(int i,int x){
    if(i==total){
        if(pos==x){
            return 1;
        }
        else if(pos==x){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    return f(i+1,x+1)+f(i+1,x-1);
}


void solve(int test) {
    cin >> s >> s1;
    n = s.size();
    for (int i = 0; i < n;i++){
        if(s[i]=='+'){
            pos++;
        }
        else{
            pos--;
        }
    }
    int sum = 0;
    for (int i = 0; i < n;i++){
        if(s1[i]=='?'){
            total++;
        }
        else if(s1[i]=='+'){
            sum++;
        }
        else{
            sum--;
        }
    }
    

    double x = f(0, sum);

    total = pow(2, total);
    double y = total;
   
    double ans = x / y; 
    if(total==1 and pos==sum){
        ans = 1;
    }
    cout <<setprecision(10)<< ans << "\n";
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
