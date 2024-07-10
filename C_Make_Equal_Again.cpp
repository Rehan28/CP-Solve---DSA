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
    int x = 0;
    int ans = 0;
    for (int i = 0; i < n;i++){
        if(a[i]!=a[0]){
            x = i;
            break;
        }
    }
    ans = n - x;
    int y = -1;
    for (int i = n - 1; i > -1;i--){
        if(a[i]!=a[n - 1]){
            y = i+1;
            break;
        }
    }
    //cout << x << " " << y << "\n";
    if(n==1){
        cout << 0 << "\n";
    }
    else if(a[0]==a[n-1]){
        if(y==-1){
            cout << (y - x)+1 << "\n";
        }
        else{
            cout << (y - x) << "\n";
        }
        
    }
    else{
        y = max(y, 1);
        ans = min(ans, y);
        cout << ans << "\n";
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