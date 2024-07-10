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
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            char c;
            cin >> c;
            if(c=='1'){
                mp[j]++;
            }
        }
    }
    bool f = true;
    for (int i = 0; i < n-1;i++){
        if(mp[i]!=mp[i+1] and mp[i]>0 and mp[i+1]>0){
            f = false;
            break;
        }
    }
    if(f){
        cout << "SQUARE\n";
    }
    else{
         cout << "TRIANGLE\n";
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