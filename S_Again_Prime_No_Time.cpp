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
const int N = 1e5 + 9;

//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    int spf[N + 1] ;
    for (int i = 1; i < N;i++){
        spf[i] = i;
    }
    for (int i = 2; i < N;i++){
        for (int j = i; j < N;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
    for (int j = 1;j<=t;j++){
        int m,n;
        cin>>m>>n;
        int ans = 1e9;
        while(m>1){
            int p = spf[m];
            int m_power = 0;
            while (m%p==0){
                m_power++;
                m /= p;
            }
            int factor_power = 0;
            for (int i = 1; i <= n;i++){
                int x = i;
                while (x%p==0){
                    factor_power++;
                    x /= p;
                }  
            }
            ans = min(ans, factor_power / m_power);
        }
        cout << "Case " << j << ":\n";
        if(ans==0){
            cout << "Impossible to divide\n";
        }
        else{
            cout << ans << "\n";
        }
        
    }
	return 0;
 }