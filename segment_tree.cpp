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

//#Segment tree
/*
marge sort ar moto
number of level = log(n) - 2^k hobe nod = time complexity
space or number of node = max 4n-1 ta

*/
const int N = 1e5+9;
int a[N];
int t[N * 4];//because n*4 node thakte pare(n*4 - 1)
void build(int node,int b,int e) {
    if(b==e) {
        t[node] = a[b];//Base Case oi node ar value ta e add korbe.
        return;
    }
    int l = 2 * node;//left node
    int r = 2 * node + 1;//right node
    int mid = (b + e) / 2;// node ar range gulare 2 vage vag kore feltychi.
    build(l, b, mid);//left side ar jonno new build 
    build(r, mid+1, e);//right side ar jonno new build
    t[node] = t[l] + t[r];// akta node ar sum hobe tar child 2 tar sum
    //cout << node << " " << t[node] << "\n";
    // sob calculate kore nia asbe.
}
int query(int node,int b,int e,int i,int j) {
    if(b>j or e<i){
        // jode i and j ar baire hoy then oi node lagbena. 
        return 0;
    }
    if(b>=i and e<=j){
        // i and j ar modde hole must nebo.
        // ses a joto gula amon hobe oigular sum e amr range sum.
        //feel korle bojha jay.
        return t[node];
    }
    int l = 2 * node;
    int r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
    // jara intersect kore tader child check korbo jate amon pai jara modde thake
}
void update(int node,int b,int e,int i,int x) { //i number index a x update kora lagbe
    if(i>e or i<b) {// jodi b and e ar modde i na hoy then return
        return;
    }
    if(b==e and b==i) { // jodi akta node e thake and oi node a i thake then atai update korbo
        t[node] = x;
        return;
    }
    int l = 2 * node;
    int r = 2 * node + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);//child gula o check korbo
    update(r, mid+1, e, i, x);
    t[node] = t[l] + t[r]; //recursivly all parents update hobe.
}
int Rehan(int test) {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) { //1 base input nile hiseb subidha hoy
    // 0 base a o somossa hoy na.
        cin >> a[i];// 1 2 3 4 5
    }
    build(1, 1, n);//4*log(n)
    cout << query(1, 1, n, 2, 4) << "\n";
    update(1, 1, n, 3, 10);
    cout << query(1, 1, n, 2, 4) << "\n";
    // jodi max/min/gcd/lcm/OR/AND/XOR korty cai tao kora jabe . karon ader order a result mater kore na.
    // return ar jaygay and + ar jaygay change korlye hobe.
    return 0;
}

//#order set

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  o_set<int> se;
  se.insert(4);
  se.insert(2);
  se.insert(5);
  // sorted set se = [2, 4, 5]
  cout << se.order_of_key(5) << '\n'; // number of elements < 5
  cout << se.order_of_key(6) << '\n'; // number of elements < 6
  cout << (*se.find_by_order(1)) << '\n'; // if you imagine this as a 0-indexed vector, what is se[1]?
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
 
 // without comment segment tree
const int N = 1e5+9;
int a[N];
int t[N * 4];
void build(int n,int b,int e) {// ata O(2*n) a kaj kore.
    if(b==e) {
        t[n] = a[b];
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = t[l] + t[r];
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
    t[n] = t[l] + t[r]; 
}
int query(int n,int b,int e,int i,int j) {
    if(b>j or e<i){
        return 0;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

// segment tree marge use kore
const int N = 1e5 + 9;
int a[N];
struct node{
    int mn, count;
};
node t[N*4];
node merge(node l,node r){
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


//#YouKnowWho
const int N = 3e5 + 9;

int a[N];
struct ST {
  int t[4 * N];
  static const int inf = 1e9;
  ST() {
    memset(t, 0, sizeof t);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = max(t[l], t[r]); // change this
  }
  void upd(int n, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[n] = x; // update
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    upd(l, b, mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[n] = max(t[l], t[r]); // change this
  }
  int query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return -inf; // return appropriate value
    if (b >= i && e <= j) return t[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
  }
}t;


//#Segment Tree Lazy


const int N = 1e5 + 9;
int a[N];
int t[4 * N], lazy[4 * N];

void push(int n,int b,int e){
    if(lazy[n]==0){
        return;
    }
    t[n] = t[n] + 1LL*(e - b + 1) * lazy[n];
    if(b!=e){
       int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
       lazy[l] += lazy[n];
       lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void build(int n,int b,int e){
    if(b==e){
        t[n] = 0;//akhane first a sob value 0 thakbe
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
void update(int n,int b,int e,int i,int j,int v){
    push(n, b, e);// ai push ta important kintu akhono bujina kano
    if(j<b or i>e){
        return;
    }
    if(b>=i and e<=j){
        lazy[n] = v;
        push(n, b, e);// ata push kora hoy nai akhono
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    t[n] = t[l] + t[r];
}
int query(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(j<b or i>e){
        return 0;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}


##Lazy Propagation YouKnowWho
// ata dia range update kora jay jodi boli (1-5) sob gulay 2 add koro
// propagation value dia sokol node a jaoa lage na1
#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 9;
int a[N];
struct ST {
  #define lc (n << 1)
  #define rc ((n << 1) + 1)
  long long t[4 * N], lazy[4 * N];
  ST() {
    memset(t, 0, sizeof t);
    memset(lazy, 0, sizeof lazy);
  }
  inline void push(int n, int b, int e) { // change this
    if (lazy[n] == 0) return;
    t[n] = t[n] + lazy[n] * (e - b + 1);
    if (b != e) {
      lazy[lc] = lazy[lc] + lazy[n];
      lazy[rc] = lazy[rc] + lazy[n];
    }
    lazy[n] = 0;
  }
  inline long long combine(long long a,long long b) { // change this
    return a + b;
  }
  inline void pull(int n) { // change this
    t[n] = t[lc] + t[rc];
  }
  void build(int n, int b, int e) {
    lazy[n] = 0; // change this
    if (b == e) {
      t[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }
  void upd(int n, int b, int e, int i, int j, long long v) {
    push(n, b, e);
    if (j < b || e < i) return;
    if (i <= b && e <= j) {
      lazy[n] = v; //set lazy
      push(n, b, e);
      return;
    }
    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, j, v);
    upd(rc, mid + 1, e, i, j, v);
    pull(n);
  }
  long long query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (i > e || b > j) return 0; //return null
    if (i <= b && e <= j) return t[n];
    int mid = (b + e) >> 1;
    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
  }
}t;
int32_t main() {
  int n = 5;
  for (int i = 1; i <= n; i++) {
    a[i] = i;
  }
  t.build(1, 1, n); // building the segment tree
  t.upd(1, 1, n, 2, 3, 10); // adding 10 to the segment [2, 3]
  cout << t.query(1, 1, n, 1, 5) << '\n'; // range sum query on the segment [1, 5]
  return 0;
}


void Coordinate_Compression(){
    // Called Coordinate Compression
    // atar kaj holo boro akta range a number ar modde kichu jayga faka thakle 
    // ota compres kore jay (1,5,10) rea = 1,2,3 banano jay
    for (int i = 1; i <=n;i++){
        cin >> a[i] >> b[i];
        st.insert(a[i]);
        st.insert(b[i]);
    }
    for(int i=0;i<q;i++){
        cin >> Q[i];
        st.insert(Q[i]);
    }
    map<int, int> mp;
    int id = 0;
    for(auto x : st){
        mp[x] = ++id;
        //id++;
    }
}

//Sparse Table 

const int N = 1e5 + 9;

int t[N][18], a[N];
void build(int n) {
  
  for(int k = 1; k < 18; ++k) {
    for(int i = 1; i + (1 << k) - 1 <= n; ++i) {
      t[i][k] = min(t[i][k - 1], t[i + (1 << (k - 1))][k - 1]);
    }
  }
}

int query(int l, int r) {
  int k = 31 - __builtin_clz(r - l + 1);
  return min(t[l][k], t[r - (1 << k) + 1][k]);
}
//https://vjudge.net/contest/664316#problem/K