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
int Rehan(int test){
    int dec[4];
    for (int i = 0; i < 4;i++){
        cin >> dec[i];
        if(i!=3){
        char dummy;
        cin >> dummy;
        }
        
    }
    int binary[4];
    for (int i = 0; i < 4;i++){
        cin >> binary[i];
        if(i!=3){
        char dummy;
        cin >> dummy;
        }
        int x = binary[i];
        //cout << x << "\n";
        int sum = 0;
        int pos = 0;
        while (x>0){
            if(x%10==1){
                sum += (pow(2, pos));
            }
            pos++;
            x /= 10;
        }
        binary[i] = sum;
        //cout << binary[i] << "\n";
     }
     bool f = true;
     for (int i = 0; i < 4; i++)
     {
        if(dec[i]!=binary[i]){
            f = false;
            break;
        }

    }
    if(f){
        cout << "Case " << test << ": Yes\n";
    }
    else{
        cout << "Case " << test << ": No\n";
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