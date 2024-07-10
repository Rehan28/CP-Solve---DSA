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

struct st{
    int a, b,c;
};
//akane comp ami c re priorty basi dici(choto theke boro) then b(borotheke choto) then a(choto theke boro);
bool comp(const st &x, const st &y) {
   if(x.c==y.c){
       if(x.b==y.b){
           return x.a < y.a;
       }
       return x.b > y.b;
   }
   return x.c < y.c;
   // ata dia bujay true hoile swap kore dao amon.
}

void solve(int test) {
    int n;
    cin>>n;
    vector<st> v;
    for (int i = 0; i < n;i++){
        int x,y,z;
        cin >> x >> y>>z;
        v.push_back({x,y,z});
    }
    sort(v.begin() , v.end(),comp);
    //cout << v.size() << "\n";
    for (int i = 0; i < n;i++){
       cout << v[i].a << " " << v[i].b <<" "<<v[i].c<< "\n";
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
