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
//cout << "Case " << test << ": ";
//Muku28
const int N = 1e6 + 9;
double pfx[N + 1];// log10[i] sum
void Log_sum(){
    pfx[1] = log10(1);//log 0 possible na
    for (int i = 2; i < N;i++){
        pfx[i] = pfx[i - 1] + log10(i);
    }
}
int Rehan(int test){
    int n,base;
    cin>>n>>base;
    double digit = 0;
    // for (int i = 2; i <= n;i++){
    //     digit += (log10(i)/log10(base));
    // }
    double sum_of_log = pfx[n];
    digit = sum_of_log / log10(base);
    int ans = (int)floor(digit);
    cout <<"Case "<<test<<": "<< ans+1 << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
	cin>>t;
    Log_sum();
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }