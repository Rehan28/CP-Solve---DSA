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

void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();
    int other = 0;
    int two = 0;
    int three = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='3'){
            three++;
        }
        else if(s[i]=='2'){
            two++;
        }
        else{
            other += s[i] - '0';
        }
    }
    int sum = other%9;
    sum += (2 * two);
    for (int i = 0; i <= two;i++){
        int x = 9 - sum % 9;
        if(x%3==0 and x/3<=three){
            yes;
            return;
        }
        else if(sum%9==0){
            yes;
            return;
        }
        sum += 2;
    }
    no;
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
