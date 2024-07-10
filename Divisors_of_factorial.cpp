#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
ll mod = 1e9 + 7;
const int N = 1e5 + 9;
int spf[N + 1];
void Find_Spf(){
    for (int i = 1; i < N;i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N;i++) {
        for (int j = i; j < N;j+=i) {
            spf[j] = min(spf[j], i);
        }
    }
}
//Muku28
int Rehan(int test){
    int n;
    cin>>n;
    int prime_power[n+1] = {0};
    for (int i = 1; i <= n;i++){
        int x = i;
        while(x>1){
            int p = spf[x];
            while(x%p==0){
                prime_power[p]++;
                x /= p;
            }
        }
    }
    ll divisor = 1;
    for (int i = 1; i <= n;i++){
        divisor = (divisor * (prime_power[i] + 1)) % mod;
    }
    cout << divisor << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();int t = 1;
	cin>>t;
    Find_Spf();
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }