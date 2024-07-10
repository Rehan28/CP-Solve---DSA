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
    int p = 0;
    int First = 0;
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n;i++){
        if(First==0){
            if(a[i]%2){
                p = 1;
            }
            else
                p = 0;
            First = 1;
        }
        if(p==1 and a[i]%2 and sum>=0){
            sum += a[i];
            p = 0;
            ans = max(sum, ans);
        }
        else if(p==0 and a[i]%2==0 and sum>=0){
            sum += a[i];
            p = 1;
            ans = max(sum, ans);
        }
        else{
            sum = 0;
            First = 0;
            i--;
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