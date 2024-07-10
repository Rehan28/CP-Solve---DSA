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

const int N = (1 << 17) + 9; // atai dichilo 2 ^ 17;
int a[N];
int t[N * 4];
//int v[N * 4];

int value(int n,int b,int e){
    int x = (e - b) + 1;
    int ans =  __lg(x);// O(1) a log2 ber kore int value day
    //v[n] = ans+1;
    return ans+1;
}

void build(int n,int b,int e) {
    if(b==e) {
        t[n] = a[b];
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    int val = value(n,b,e);
    if(val%2){
        t[n] = t[l] ^ t[r];
    }
    else{
        t[n] = t[l] | t[r];
    }
    
}
void update(int n,int b,int e,int i,int x) { 
    if(i>e or i<b) {
        return;
    }
    if(b==e and b==i) { 
        t[n] = x;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    int val = value(n,b,e);
    if(val%2){
        t[n] = t[l] ^ t[r];
    }
    else{
        t[n] = t[l] | t[r];
    }
}

void solve(int test) {
    int n,q;
    cin>>n>>q;
    //cout << value(1, 1, 8) << "\n";
    n = 1<<n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    build(1, 1, n);
    while(q--){
        int p, b;
        cin >> p >> b;
        update(1, 1, n, p, b);
        cout << t[1] << "\n";
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
