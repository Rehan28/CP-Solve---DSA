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
int Rehan(){
    int n,k;
    cin>>n>>k;
    int b[n + 1] = {0};
    int c = 1;
    for (int i = 1; i <= k;i = i+2){
        for (int j = i; j <= n;j = j+k){
            b[j] = c;
             c++;
        }
    }
    c = n;
    for (int i = 2; i <= k;i = i+2){
        for (int j = i; j <= n;j = j+k){
            b[j] = c;
            c--;
        }
    }
    for (int i = 1; i <= n;i++)
    {
        cout << b[i] << " ";
    }
    nl;
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }