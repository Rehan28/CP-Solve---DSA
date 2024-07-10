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
const int N = 2e5 + 9;
int pfx[N];
void find_all(){
    for (int i = 1; i < N;i++){
        int y = i;
        string s = to_string(y);
        int sum = 0;
        for (int j = 0; j < s.size();j++){
            int xx = (s[j] - '0');
            sum += xx;
        }
        pfx[i] = pfx[i - 1] + sum;
    }
}
//Muku28
int Rehan(){
    int n;
    cin>>n;
    cout << pfx[n] << "\n";
    int n;
    cin >> n;

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    find_all();
    while(t--){
        Rehan();
    }
		return 0;
 }
 int n;cin>> n;
 for (int i = 0;i<n;i)