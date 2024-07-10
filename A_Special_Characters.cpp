#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

void Rehan(int test) {
    int n;
    cin>>n;
    if(n%2){
        no;
    }
    else{
        yes;
        char c = 'A';
        for (int i = 0; i < n/2;i++){
            cout << c << c;
            c++;
        }
        nl;
    }
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