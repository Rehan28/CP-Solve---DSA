#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
int Rehan(int test) {
    int n;
    string s;
    cin >> s;
    string c = s;
    n = s.size();
    int z = 0, one = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            z++;
        }
        else{
            one++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='1'){
            if(z>0){
                z--;
            }
            else{
                ans = (n - i);
                break;
            }
        }
        else{
            if(one>0){
                one--;
            }
            else{
                ans = (n - i);
                break;
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
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
	return 0;
 }