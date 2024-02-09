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
int Rehan(int x){
   
    return 0;
}
//--------------28--------------//
const int x = 1e6 + 9;
int p[x + 1];
vector<int> v;
int main(){
    Muku28();
    int t = 1;
    for (int i = 2; i <= x;i++){
        if(p[i]==0){
            v.push_back(i);
            for (int j = i+i; j <= x; j += i){
                p[j] = 1;
            }
        }
    }
    cin >> t;
    for (int k = 0; k < t;k++){
        ll a;
        cin >> a;
        int divisor = 1;
        for (int i = 0; i < v.size();i++){
            if(1LL*v[i]*v[i]>a)break;
            int power = 0;
            while (a%v[i]==0)
            {
                power++;
                a /= v[i];
            }
            //dbg(power);
            divisor *= (power + 1);
        }
        if(a>1)
            //prime cole aste pare 
            //ager gulay lage nai karon while(n>1) claichi
            divisor *= 2;//because this number is a prime that why 1+1
        cout << "Case " << k + 1 << ": " << divisor-1 << "\n";//one divisor akhane hobena,q a cay nai
    }
    return 0;
 }