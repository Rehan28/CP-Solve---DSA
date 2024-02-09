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
int x = 1e6+8; 
int spf[1000009];
bool f[1000009];
int Rehan(){
    int n;//<=1e6
    cin>>n;
    int a[n];//a[i]<=1e6
    cin(a,n);//array input nichi
    for (int i = 2; i <=x;i++){
        spf[i] = i;
    }
    for (int i = 2; i*i <= x;i++){
        if(!f[i]){
            for (int j = i*i; j <= x;j=j+i){
                spf[j] = min(i, spf[j]);
                f[i] = true;
            }
        }
    }
    for (int k = 0; k < n;k++){
        int y = a[k];
        int p = y;
        int cpf = 0;
        int gpf = 0;
        int unique_p = 0;
        int divisor = 1;
        ll divisor_sum = 1;
        while (y>1){   
            gpf = max(spf[y], gpf);
            int pp = spf[y];
            unique_p++;
            int factor_power = 1;
            int factor_mul = 1;
            while (y%pp==0){
                 cpf++;
                 factor_power++;
                 factor_mul *= pp;
                 y /= pp;
            }
            divisor *= factor_power;
            divisor_sum *= (((ll)factor_mul * pp)-1) / (pp - 1);
        }
        cout << spf[p] << " ";
        cout << gpf << " ";
        cout << unique_p<< " ";
        cout << cpf << " ";
        cout << divisor << " ";
        cout << divisor_sum << "\n";
    }
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