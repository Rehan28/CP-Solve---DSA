#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28
const int x = 1e6 + 9,m=1e6;
int f[x+1];
int d[x+1];
int Rehan(){
    int n;
    cin>>n;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        f[a]++;
    }
    for (int i = 1; i <= x;i++){
        for (int j = i; j <= x;j=j+i){
            d[i] += f[j];
        }
    }
    for (int i = 1; i <= m;i++){
        cout << d[i] << " ";
    }
    cout << '\n';
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }