#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
const int N = 2e5 + 9;
// Hi thik simply -_-
void solve(int test) {
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<int> p;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        p.push_back(x);
    }
    vector<int> a;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    ll bpoint = 0;
    ll x = k;
    ll sum = 0;
    int pp = pb;
    for (int i = 0; i < n;i++){
        if(x==0){
            break;
        }
        bpoint = max(bpoint, (x * a[pp-1]) + sum);
        sum += a[pp - 1];
        pp = p[pp - 1];
       
        x--;
    }

    ll spoint = 0;
    x = k;
    sum = 0;
    pp = ps;
    for (int i = 0; i < n;i++){
        if(x==0){
            break;
        } 
        spoint = max(spoint, (x * a[pp-1]) + sum);
        sum += a[pp - 1];
        pp = p[pp - 1];
        x--;
    }


    if(bpoint>spoint){
        cout << "Bodya\n";
    }
    else if(spoint>bpoint){
        cout << "Sasha\n";
    }
    else{
        cout << "Draw\n";
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
