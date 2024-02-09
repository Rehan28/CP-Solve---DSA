#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//Muku28
int x = 1e6+1;
int spf[1000009];
int divisor[1000009];
ll divisor_sum[1000009];
int Rehan(){
    int n;//<=1e6
    cin>>n;
    int a[n];//a[i]<=1e6
    cin(a,n);//array input nichi
    for (int i = 2; i <=x;i++){
        spf[i] = i;
    }
    for (int i = 2; i<= x;i++){
        for (int j = i; j <= x;j=j+i){
            spf[j] = min(i, spf[j]);
            divisor[j]++;
            divisor_sum[j] += (ll)i;
        }
    }

    for (int k = 0; k < n;k++){
        int y = a[k];
        int p = y;
        int cpf = 0;
        int gpf = 0;
        int unique_p = 0;
        while (y>1){
            gpf = max(spf[y], gpf);
            int pp = spf[y];
            unique_p++;
            while (y%pp==0){
                 cpf++;
                y /= pp;
            }
        }
        cout << spf[p] << " ";
        cout << gpf << " ";
        cout << unique_p<< " ";
        cout << cpf << " ";
        cout << divisor[p]+1 << " ";
        cout << divisor_sum[p]+1 << "\n";
    }
    return 0;
}
int main(){
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
      return 0;
 }
