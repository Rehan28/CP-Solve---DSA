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
    ll sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }
    sum = sum / n;
    for (int i = 0; i < n-1;i++){
        if(a[i]>=sum){
            a[i + 1] += (a[i] - sum);
        }
        else{
            no;
            return 0;
        }
    }
    if(a[n-1]<sum){
        no;
    }
    else{
        yes;
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