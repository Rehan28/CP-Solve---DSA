
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

const int N = 1e6 + 9;
int a[N], t[4 * N], lazy[4 * N];

void push(int n,int b,int e){
    if(lazy[n]==0){
        return;
    }
    t[n] += lazy[n];
    if(b!=e){
        int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void build(int n,int b,int e){
    lazy[n] = 0;//multiple test case ar jonno kora lagteche.
    if(b==e){
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l , b , mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(j<b or e<i){
        return;
    }
    if(b>=i and j>=e){
        lazy[n] += 1;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j);
    update(r, mid+1, e, i, j);
    t[n] = t[l] + t[r];
}

int query(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(j<b or e<i){
        return 0;
    }
    if(b>=i and j>=e){
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve(int test) {
    int n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    cout << "Case " << test << ":\n";
    n = s.size();
    build(1, 1, n);
    while (q--){
        char c;
        cin >> c;
        if(c=='I'){
            int x, y;
            cin >> x >> y;
            update(1, 1, n, x, y);
        }
        else{
            int x;
            cin >> x;
            int val = query(1, 1, n, x, x);
           //dbg(val);
            if(s[x-1]=='1'){
                if (val%2){
                    cout << "0\n";
                }
                else{
                    cout << "1\n";
                }
            }
            else{
                if (val%2){
                    cout << "1\n";
                }
                else{
                    cout << "0\n";
                }
            }
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
