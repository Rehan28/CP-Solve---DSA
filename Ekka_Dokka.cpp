#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28
int Rehan(int test){
    ll n;
    cin>>n;
    cout << "Case " << test << ": ";
    if(n%2){
        cout << "Impossible\n";
    }
    else{
        ll x = 1;
        while(n%2==0){
            x *= 2;
            n /= 2;
        }
        cout << n << " " << x << "\n";
    }
    

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
   for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }