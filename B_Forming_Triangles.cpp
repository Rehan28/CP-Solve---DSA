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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    ll ans = 0;
    sort(a, a + n);
    for (int i = 0; i < n-1;i++){
        int st = i;
        if(a[i]==a[i+1]){
            int end = st+1;
            if(i+1==n-1){
                end = n - 1;
            }
            else{
                bool f = true;
                for (; i < n - 1;){
                    if(a[i]!=a[i+1]){
                        end = i;
                        f = false;
                        break;
                    }
                    else
                    {
                        i++;
                    }
                }
                if(f){
                    end = n - 1;
                }
            }
            ll x = end - st;
            ll tows = (x * (x + 1)) / 2;
            // cout << tows << "\n";
            // cout << x << "\n";
            ans += (tows * st);
            while (x--)
            {
                 ans += (x * (x + 1)) / 2; 
            }
            
        }
    }
    cout << ans << "\n";
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