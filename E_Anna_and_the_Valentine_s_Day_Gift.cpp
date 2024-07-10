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
    int n,m;
    cin>>n>>m;
    int x = 0;
    vector<int> v;
    for (int i = 0; i < n;i++){
            string s;
            cin >> s;
            int c = s.size()-1;
            x += c+1;
            int cc = 0;
            for (int j = c; j >-1 ;j--){
                if(s[j]!='0'){
                    break;
                }
                cc++;
            }
            if(cc!=0){
                v.push_back(cc);
            }
           
    }
    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i > -1;i = i-2)
    {
        x -= v[i];
    }
    //cout << x << "\n";
    if (x >= (m + 1))
    {
        cout << "Sasha\n";
    }
    else{
        cout << "Anna\n";
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