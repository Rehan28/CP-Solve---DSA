#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

// const int N = 1e5 + 9;
// int a[N];
// int t[4 * N];
// int num[N * 4];
// void build(int node,int b,int e) {
//     if(b==e){
//         t[node] = a[b];
//         num[node] = 1;
//         return;
//     }
//     int l = 2 * node;
//     int r = 2 * node + 1;
//     int mid = (b + e) / 2;
//     build(l, b, mid);
//     build(r, mid + 1, e);
//     if(t[l]<t[r]){
//         t[node] = t[l];
//         num[node] = num[l];
//     }
//     else if(t[r]<t[l]){
//         t[node] = t[r];
//         num[node] = num[r];
//     }
//     else{
//         t[node] = t[r];
//         num[node] = num[r]+num[l];
//     }
// }
// pair<int,int> query(int n,int b,int e,int i,int j) {
//     if(e<i or b>j){
//         return make_pair(INT_MAX,1);
//     }
//     if(b>=i and e<=j){
//         return make_pair(t[n],num[n]);
//     }
//     int l = 2 * n;
//     int r = 2 * n + 1;
//     int mid = (b + e) / 2;
//     pair<int,int> x = query(l, b, mid, i, j);
//     pair<int,int> y = query(r, mid + 1, e, i, j);
//     if(x.first<=y.first){
//         return make_pair(x.first,num[l]);
//     }
//     else if(x.first>y.first){
//         return make_pair(y.first, num[r]);
//     }
// }
// void update(int n,int b,int e,int pos,int val) {
//     if(b==e and b==pos){
//         t[n] = val;
//         num[n] = 1;
//         return;
//     }
//     if(pos>e or pos<b){
//         return;
//     }
//     int l = 2 * n;
//     int r = 2 * n + 1;
//     int mid = (b + e) / 2;
//     update(l, b, mid, pos, val);
//     update(r, mid+1, e, pos, val);
//     if(t[l]<t[r]){
//         t[n] = t[l];
//         num[n] = num[l];
//     }
//     else if(t[r]<t[l]){
//         t[n] = t[r];
//         num[n] = num[r];
//     }
//     else{
//         t[n] = t[r];
//         num[n] = num[r]+num[l];
//     }
// }
const int N = 1e5 + 9;
int a[N];
struct node{
    int mn, count;
};
node t[N*4];//array na use kore struct use kora hoiche two value stract
node merge(node l,node r){//function ta left and right node ar modde kontar number choto
// j ta choto seitar count ans a add korbo neoa hobe
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if(l.mn == ans.mn){
        ans.count += l.count;
    }
    if(r.mn == ans.mn){
        ans.count += r.count;
    }
    return ans;
}
void build(int n,int b,int e) {
    if(b==e) {
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = merge(t[l],t[r]);
}
node query(int n,int b,int e,int i,int j) {
    if(b>j or e<i){
        return {INT_MAX,1};
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j) , query(r, mid + 1, e, i, j));
}
void update(int n,int b,int e,int i,int x) { 
    if(i>e or i<b) {
        return;
    }
    if(b==e and b==i) { 
        t[n].mn = x;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[n] = merge(t[l], t[r]); 
}

int Rehan(int test) {
    int n,q;
    cin>>n>>q;
    for (int i = 1; i <= n;i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while(q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if(x==1){
            update(1, 1, n, y+1, z);
        }
        else{
            node p = query(1, 1, n, y + 1, z);
            cout << p.mn << " " << p.count << "\n";
        }
    }
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	//cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }