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
    

    return 0;
}
//--------------28--------------//
const int n = 1e6 + 7;
bool f[n + 1];
int spf[n + 1];
int main(){
   // Muku28();
    int t = 1;
    for (int i = 2; i <= n;i++){
        if(!f[i]){
            for (int j = i; j <= n;j+=i){
                spf[j]++;
                f[j] = true;
            }
        }
    }
        // cin>>t;
        while (1){
            int a;
            cin >> a;
            if(a==0){
                break;
            }
            // int x = a;
            // int c = 0;
            // while (x>1){
            //     c++;
            //     int p = spf[x];
            //     while (x%p==0){
            //         x /= p;
            //     }  
            // }
            cout << a << " : " << spf[a] << "\n";
        }
		return 0;
 }