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

const int N = 1e5 + 9;
int n;
int a[N];
int b[N];
int x;
int y;
bool f(int pos1,int pos2){
    int time = abs(x - pos1) + abs(y - pos2);
    for (int i = 0; i < n;i++){
        int t = abs(a[i] - pos1) + abs(b[i] - pos2);
        if(t<=time){
            return false;
        }
    }
    return true;
}

void solve(int test) {
    cin>>n;
    for (int i = 0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    int c, d;
    cin >> x >> y >> c >> d;
    int val = abs(c - x)/2;
    int val1 = abs(d - y)/2;
    bool f 
    if(f(x,val1)){
        yes;
        return;
    }
    else if(f(c,val1)){
        yes;
        return;
    }
    else if(f(val,y)){
        yes;
        return;
    }
    else if(f(val,d)){
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
