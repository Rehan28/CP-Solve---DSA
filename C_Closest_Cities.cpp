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
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll b[n];
    for (int i = 0; i < n-1;i++)
    {
        ll x = a[i + 1] - a[i];
        if(i!=0)
        {
            ll y = a[i] - a[i - 1];
            if(y>x){
                b[i+1] = 1;
            }
            else
                b[i+1] = x;
        }
        else
        {
            b[i + 1] = 1;
        }
    }
    ll pfx[n];
    pfx[0] = 0;
    for (int i = 1; i < n;i++)
    {
        pfx[i] = pfx[i - 1] + b[i];
    }
    ////
    ll c[n];
    for (int i = n - 1; i > 0;i--){
        ll x = abs(a[i - 1] - a[i]);
        if(i!=n-1){
            ll y = abs(a[i] - a[i + 1]);
            if(x<y){
                c[i - 1] = 1;
            }
            else
            {
                c[i - 1] = x;
            }
        }else{
            c[i - 1] = 1;
        }
    }
    ll sfx[n];
    sfx[n - 1] = 0;
    for (int i = n - 2; i > -1;i--)
    {
        sfx[i] = sfx [i + 1] + c[i];
        //cout << i << " " << sfx[i] << "\n";
    }
    int q;
    cin >> q;
    for (int i = 0; i < q;i++){
        int x, y;
        cin >> x >> y;
        if(x<y){
            cout << pfx[y-1] - pfx[x-1] << "\n";
        }
        else{
            cout << sfx[y-1]- sfx[x-1] << "\n";
        }
    }        
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