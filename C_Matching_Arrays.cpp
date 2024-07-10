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

void solve(int test) {
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b,n);
    int c[n];
    for (int i = 0; i < n;i++)
    {
        c[i] = a[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int x = (2 * n) + 9;
    vector<int> v[x]; 
    int point = n-k;
    //dbg(point);
    for (int i = 0; i < k;i++){
        if(a[point]<=b[i]){
            no;
            return;
        }
        v[a[point]].push_back(b[i]);
        point++;
    }
    point = 0;
    for (int i = k; i < n;i++){
        if(a[point]>b[i]){
            no;
            return;
        }
        v[a[point]].push_back(b[i]);
        point++;
    }
    yes;
    for (int i = 0; i < n;i++){
        int val = c[i];
        int sz = v[val].size() - 1;
        cout << v[val][sz] << " ";
        v[val].pop_back();
    }
    cout << "\n";
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
