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
//ll mod = 1e9 + 7;

//Muku28
int Rehan(){
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    sort(a, a + n);
    map<int, int> mp;
    map<int, int> last;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
        last[a[i]] = i;
    }
    for (int i = 0; i < n;i++){
            i = last[a[i]];
            if (mp[a[i]] == 1)
            {
            for (int j = 0; j < n; j++)
            {
                if(a[i]!=a[j] and a[i]%a[j]!=0){
                    yes;
                    return 0;
                }
                else if(a[i]!=a[j]){
                    break;
                }
             } 
            }
            else{
                for (int j = 0; j < n;j++){
                if(a[i]!=a[j] and a[i]%a[j]!=a[i] and a[i]%a[j]!=0){
                    yes;
                    return 0;
                }
                else if(a[i]!=a[j]){
                    break;
                }
            }
            
        }
    }
    no;
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