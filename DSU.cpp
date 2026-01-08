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

const int N = 1e5 + 9;

int parent[N];
int size[N];

void make_set(int v){
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v){
    if(parent[v]==v)
        return v;
    return parent[v] = find_set(parent[v]);
//This simple modification of the operation already achieves the time 
//complexity O(\log n) per call on average (here without proof)
}

void union_set(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        //Rank by size
        if(size[a]<size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

//compare find_set(a) == find_set(b) not parent[a]...   
/* amortized time complexity is O(alpha(n)), where alpha(n) is the 
inverse Ackermann function, which grows very slowly. In fact it grows so 
slowly, that it doesn't exceed 4 for all reasonable n 
(approximately n < 10^{600}).*/

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
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
